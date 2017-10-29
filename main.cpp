#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>


LPSTR NazwaKlasy = "Klasa Okienka";
MSG Komunikat;
HWND g_hPrzycisk;
HBITMAP hbmObraz;
HWND hStatic;

hbmObraz =( HBITMAP ) LoadImage( NULL, "C:\Users\user\Desktop\kot1300.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE );

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
        Sleep(520);


    HWND hwnd;
        Sleep(567);
    hwnd = CreateWindowEx( WS_EX_CLIENTEDGE, NazwaKlasy, "Buahahaha", WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT, 900, 600, NULL, NULL, hInstance, NULL );


    HWND hStatic = CreateWindowEx
    (0, "STATIC", NULL, WS_CHILD | WS_VISIBLE | BACKGROUND_GREEN | SS_CENTER,
     5, 20, 900, 600, hwnd, NULL, hInstance, NULL);

     SetWindowText( hStatic, "Ta aplikacja ukarze Tobie najlepsza rzecz na swiecie!!!");

    // przycisk
   g_hPrzycisk = CreateWindowEx( 0, "BUTTON", "Nacisnij mnie", WS_CHILD | WS_VISIBLE,
    370, 500, 150, 30, hwnd, NULL, hInstance, NULL );

    //Obrazek

   HBITMAP hbmObraz, hbmOld, hbmMaska;
    hbmObraz =( HBITMAP ) LoadImage( NULL, "obrazek.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE );
    HDC hdc = GetDC( hwnd ), hdcNowy = CreateCompatibleDC( hdc );
    BITMAP bmInfo;

    GetObject( hbmObraz, sizeof( bmInfo ), & bmInfo );
    hbmOld =( HBITMAP ) SelectObject( hdcNowy);

    BitBlt( hdc, 0, 0, bmInfo.bmWidth, bmInfo.bmHeight, hdcNowy, 0, 0, SRCAND );
    SelectObject( hdcNowy, hbmObraz );
    BitBlt( hdc, 0, 0, bmInfo.bmWidth, bmInfo.bmHeight, hdcNowy, 0, 0, SRCPAINT );

    ReleaseDC( hwnd, hdc );
    SelectObject( hdcNowy, hbmOld );
    DeleteDC( hdcNowy );
    DeleteObject( hbmObraz );






    ShowWindow( hwnd, nCmdShow ); // Poka¿ okienko...
    UpdateWindow( hwnd );

    // Pêtla komunikatów
    while( GetMessage( & Komunikat, NULL, 0, 0 ) )
    {
        TranslateMessage( & Komunikat );
        DispatchMessage( & Komunikat );
    }

        Sleep(500);
    return Komunikat.wParam;
}

// OBS£UGA ZDARZEÑ
LRESULT CALLBACK WndProc( HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
    switch( msg )
    {

    case WM_COMMAND:
        if(( HWND ) lParam == g_hPrzycisk )
            Sleep(500);
        MessageBox ( hwnd, "Przepraszam", "NIESPODZIANKA!", MB_ICONINFORMATION );
            Sleep(400);
        MessageBox ( hwnd, "Ale", "NIESPODZIANKA!", MB_ICONSTOP);
            Sleep(5900);
        MessageBox ( hwnd, "Nie", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Uda", "NIESPODZIANKA!", MB_RETRYCANCEL);
        MessageBox ( hwnd, "Ci", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Sie", "NIESPODZIANKA!", MB_OKCANCEL);
        MessageBox ( hwnd, "Na", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Razie", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Niczego", "NIESPODZIANKA!", MB_ICONINFORMATION );
            Sleep(5600);
        MessageBox ( hwnd, "Otworzyc", "NIESPODZIANKA!", MB_ICONSTOP);
        MessageBox ( hwnd, "Ale", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Poczekaj", "NIESPODZIANKA!", MB_ICONINFORMATION);
            Sleep(2000);
        MessageBox ( hwnd, "Bo", "NIESPODZIANKA!", MB_RETRYCANCEL);
        MessageBox ( hwnd, "Na", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Koncu", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Jest", "NIESPODZIANKA!", MB_OKCANCEL);
        MessageBox ( hwnd, "Najlepsza", "NIESPODZIANKA!", MB_ICONINFORMATION );
        MessageBox ( hwnd, "Rzecz", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Jakiej", "NIESPODZIANKA!", MB_RETRYCANCEL);
        MessageBox ( hwnd, "Do", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Tej", "NIESPODZIANKA!", MB_RETRYCANCEL);
        MessageBox ( hwnd, "Pory", "NIESPODZIANKA!", MB_ICONINFORMATION);
            Sleep(500);
        MessageBox ( hwnd, "Nie", "NIESPODZIANKA!", MB_ICONSTOP);
            Sleep(900);
        MessageBox ( hwnd, "Widziales", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Poczekaj", "NIESPODZIANKA!", MB_ICONINFORMATION );
        MessageBox ( hwnd, "Az", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Program", "NIESPODZIANKA!", MB_OKCANCEL);
            Sleep(5700);
        MessageBox ( hwnd, "Sie", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Odpali", "NIESPODZIANKA!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "Za", "HNIESPODZIANKAa!", MB_ICONINFORMATION);
        MessageBox ( hwnd, "3", "NIESPODZIANKA!", MB_OKCANCEL);
        MessageBox ( hwnd, "2", "NIESPODZIANKA!", MB_ICONSTOP);
            Sleep(1000);
        DestroyWindow( hwnd );
        break;
            
    case WM_PAINT:
{
    PAINTSTRUCT ps; // deklaracja struktury
    HDC hdc = BeginPaint( hwnd, & ps );
    
    HBITMAP hbmObraz, hbmOld, hbmMaska;
    hbmObraz =( HBITMAP ) LoadImage( NULL, "obrazek.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE );
    HDC hdc = GetDC( hwnd ), hdcNowy = CreateCompatibleDC( hdc );
    BITMAP bmInfo;

    GetObject( hbmObraz, sizeof( bmInfo ), & bmInfo );
    hbmOld =( HBITMAP ) SelectObject( hdcNowy);

    BitBlt( hdc, 0, 0, bmInfo.bmWidth, bmInfo.bmHeight, hdcNowy, 0, 0, SRCAND );
    SelectObject( hdcNowy, hbmObraz );
    BitBlt( hdc, 0, 0, bmInfo.bmWidth, bmInfo.bmHeight, hdcNowy, 0, 0, SRCPAINT );

    ReleaseDC( hwnd, hdc );
    SelectObject( hdcNowy, hbmOld );
    DeleteDC( hdcNowy );
    DeleteObject( hbmObraz );
    
    EndPaint( hwnd, & ps ); // zwalniamy hdc
}
break;

    case WM_CLOSE:
        MessageBox ( hwnd, "NIE NA TYM TO POLEGA", "Ha!", MB_ICONINFORMATION );
            Sleep(800);
        break;

    case WM_DESTROY:
        PostQuitMessage( 0 );
        break;

        default:
        return DefWindowProc( hwnd, msg, wParam, lParam );
    }

    return 0;
}

