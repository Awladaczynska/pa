#include <iostream>
#include <cstdlib>
#include <windows.h>

LPSTR NazwaKlasy = "Klasa Okienka";
MSG Komunikat;
HWND g_hPrzycisk;
HBITMAP hbmObraz;

//hbmObraz =( HBITMAP ) LoadImage( NULL, "C:\Users\user\Desktop\kot1300.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE );

LRESULT CALLBACK WndProc( HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam );

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )
{

    // WYPE£NIANIE STRUKTURY
    WNDCLASSEX wc;

    wc.cbSize = sizeof( WNDCLASSEX );
    wc.style = 0;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra =0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon( NULL, IDI_QUESTION );
    wc.hCursor = LoadCursor( NULL, IDC_WAIT );
    wc.hbrBackground =( HBRUSH )( COLOR_WINDOW + 0);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = NazwaKlasy;
    wc.hIconSm = LoadIcon( NULL, IDI_APPLICATION );

    // REJESTROWANIE KLASY OKNA
    if( !RegisterClassEx( & wc ) )
    {
        MessageBox( NULL, "Wysoka Komisja odmawia rejestracji tego okna!", "Niestety...",
        MB_ICONEXCLAMATION | MB_OK );
        return 1;
    }

    // TWORZENIE OKNA
     HANDLE hOut;


    hOut = GetStdHandle( STD_OUTPUT_HANDLE );

    HWND hwnd;

    hwnd = CreateWindowEx( WS_EX_CLIENTEDGE, NazwaKlasy, "Buahahaha", WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 900, 600, NULL, NULL, hInstance, NULL );

    // przycisk
   g_hPrzycisk = CreateWindowEx( 0, "BUTTON", "Naciœnij mnie", WS_CHILD | WS_VISIBLE,
    370, 500, 150, 30, hwnd, NULL, hInstance, NULL );

    //Obrazek

  // HBITMAP hbmObraz, hbmOld, hbmMaska;
    //hbmObraz =( HBITMAP ) LoadImage( NULL, "obrazek.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE );
    //HDC hdc = GetDC( hwnd ), hdcNowy = CreateCompatibleDC( hdc );
    //BITMAP bmInfo;

    //GetObject( hbmObraz, sizeof( bmInfo ), & bmInfo );
    //hbmOld =( HBITMAP ) SelectObject( hdcNowy);

    //BitBlt( hdc, 0, 0, bmInfo.bmWidth, bmInfo.bmHeight, hdcNowy, 0, 0, SRCAND );
    //SelectObject( hdcNowy, hbmObraz );
    //BitBlt( hdc, 0, 0, bmInfo.bmWidth, bmInfo.bmHeight, hdcNowy, 0, 0, SRCPAINT );

    //ReleaseDC( hwnd, hdc );
    //SelectObject( hdcNowy, hbmOld );
    //DeleteDC( hdcNowy );
    //DeleteObject( hbmObraz );




    ShowWindow( hwnd, nCmdShow ); // Poka¿ okienko...
    UpdateWindow( hwnd );

    // Pêtla komunikatów
    while( GetMessage( & Komunikat, NULL, 0, 0 ) )
    {
        TranslateMessage( & Komunikat );
        DispatchMessage( & Komunikat );
    }


    return Komunikat.wParam;
}

// OBS£UGA ZDARZEÑ
LRESULT CALLBACK WndProc( HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
    switch( msg )
    {

    case WM_COMMAND:
        if(( HWND ) lParam == g_hPrzycisk )
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION );
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION );
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION );
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION );
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION);
        DestroyWindow( hwnd );
        break;

    case WM_CLOSE:
        MessageBox ( hwnd, "Przegra³eœ", "Ha!", MB_ICONINFORMATION );
        break;

    case WM_DESTROY:
        PostQuitMessage( 0 );
        break;

        default:
        return DefWindowProc( hwnd, msg, wParam, lParam );
    }

    return 0;
}
