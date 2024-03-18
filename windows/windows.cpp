#include <windows.h>

// IDs para recursos
#define ID_BUTTON 1001

// Protótipos das funções
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void OnCreate(HWND hWnd);
void OnDestroy(HWND hWnd);
void OnPaint(HWND hWnd);
void OnButtonClick(HWND hWnd);

// Variáveis globais
HINSTANCE hInst;

// Função principal da aplicação Windows
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    hInst = hInstance; // Armazena a instância do programa

    // Registrar a classe da janela
    WNDCLASSEXW wcex = { sizeof(WNDCLASSEXW) };
    wcex.style = CS_HREDRAW | CS_VREDRAW; // Estilos da classe da janela
    wcex.lpfnWndProc = WndProc; // Função de procedimento de janela
    wcex.hInstance = hInstance; // Instância do programa
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW); // Cursor padrão
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1); // Cor de fundo da janela
    wcex.lpszClassName = L"WindowClassName"; // Nome da classe da janela
    RegisterClassExW(&wcex); // Registra a classe da janela

    // Criar a janela
    HWND hWnd = CreateWindowW(L"WindowClassName", L"Windows Application", WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, 0, 640, 480, nullptr, nullptr, hInstance, nullptr);

    if (!hWnd)
    {
        return FALSE;
    }

    // Mostrar e atualizar a janela
    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    // Loop de mensagens da janela
    MSG msg;
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}

// Função de procedimento de janela (recebe e processa mensagens da janela)
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_CREATE:
        OnCreate(hWnd); // Chamada quando a janela é criada
        break;
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            switch (wmId)
            {
            case ID_BUTTON: // Quando o botão é clicado
                OnButtonClick(hWnd); // Chamada quando o botão é clicado
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam); // Procedimento padrão
            }
        }
        break;
    case WM_PAINT:
        OnPaint(hWnd); // Chamada para desenhar na janela
        break;
    case WM_DESTROY:
        OnDestroy(hWnd); // Chamada quando a janela é destruída
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam); // Procedimento padrão
    }
    return 0;
}

// Função chamada quando a janela é criada
void OnCreate(HWND hWnd)
{
    // Criar um botão na janela
    CreateWindowW(L"BUTTON", L"Click Me", WS_VISIBLE | WS_CHILD, 10, 10, 100, 30, hWnd, (HMENU)ID_BUTTON, hInst, nullptr);
}

// Função chamada quando a janela é destruída
void OnDestroy(HWND hWnd)
{
    PostQuitMessage(0); // Enviar mensagem de saída para encerrar o loop de mensagens
}

// Função chamada para desenhar na janela
void OnPaint(HWND hWnd)
{
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hWnd, &ps); // Inicia o desenho na janela
    // Desenhar na janela aqui (opcional)
    EndPaint(hWnd, &ps); // Finaliza o desenho na janela
}

// Função chamada quando o botão é clicado
void OnButtonClick(HWND hWnd)
{
    MessageBoxW(hWnd, L"Button clicked!", L"Info", MB_OK); // Exibe uma caixa de mensagem
}

//g++ -o windows windows.cpp -mwindows -luser32 // Comando de compilação
