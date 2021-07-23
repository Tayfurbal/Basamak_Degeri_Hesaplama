#include <iostream.h>
#include <conio.h>

main ()
{
  int yedek_sayi, sayi, basamak=0, b_degeri=1;
  cout<<"Lutfen bir tam sayi giriniz:";
  cin>> sayi;
  yedek_sayi=sayi;
  do
	  basamak++;
  while ((yedek_sayi/=10)>0);
  cout<<sayi<<"=";
  basamak--;
  for(int gerisay=basamak; gerisay>-1; gerisay--)
	  {
	   b_degeri=pow(10.0,gerisay);
	   cout<<(sayi/b_degeri)<<"*"<<b_degeri;
	   if(gerisay>0)
			cout<<"+";
	   sayi=sayi-(sayi/b_degeri)*b_degeri;
	  }

getch();
}

