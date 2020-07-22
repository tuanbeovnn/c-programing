#include <stdio.h>
#include <conio.h>
void nhap(int a[], int n)
{
    printf("\nNhap vao day a : ") ;
    for(int i = 0; i < n ; i ++)
        scanf("%d", &a[i]) ;
}
void process(int a[], int n)
{
    int dem = 0, max = 0 , k = 0, vt , tmp;
    while ( k < n )
    {
        dem = 0 ;
        tmp = k ;
        for(int i = k ; i < n - 1; i++ )
        {
            if(a[i] < a[i+1]) dem ++ ;
            else k = i ;
            }
        if (dem > max )
        {
            max = dem ;
            vt = tmp ;
        }

    }
    printf("Duong chay dai nhat la : %d %d ", vt, dem ) ;
}
    main()
    {
        int n, a[1005] ;
        printf("Nhap vao n : ") ;
        scanf("%d", &n) ;
        nhap(a,n) ;
        process(a,n) ;
        getch()  ;
    }
