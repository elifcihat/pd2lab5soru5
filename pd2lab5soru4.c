


#include <stdio.h>
#include <string.h>

/*- - Referansa g�re �a�r�y� kullanarak ��eleri takas etmek i�in C'de bir program yaz�n.
Test verisi :
1. eleman�n de�erini girin: 5
2. eleman�n de�erini girin: 6
3. eleman�n de�erini girin: 7
Beklenen ��kt� :
De�i�tirmeden �nceki de�er:
eleman 1 = 5
eleman 2 = 6
eleman 3 = 7
 
De�i�tirme i�leminden sonraki de�er:
eleman 1 = 7
eleman 2 = 5
eleman 3 = 6
*/
int main(){
    
    int elemansayisi,i,gecici;
    int *ilk;
	int *ikinci;
    printf("kac tane elaman girmek istersiniz:  ");
    scanf("%d",&elemansayisi);
    int dizi[elemansayisi];
    for(i=0;i<elemansayisi;i++)
    {
    	printf("%d. elemani girin: ",i+1);
    	scanf("%d",&dizi[i]);
	}
	
	printf("degistirmeden once ki deger: \n");
	for(i=0;i<elemansayisi;i++)
	{
		printf("eleman %d = %d\n",i,dizi[i]);
	}
	ilk=ikinci=dizi;
	for(ilk=dizi,ikinci=dizi+elemansayisi-1;ilk<ikinci;ilk++,ikinci--)
	{
		gecici=*ilk;
		*ilk=*ikinci;
		*ikinci=gecici;
	}
	printf("yer degistirdikten sonra : \n");
	for(i=0;i<elemansayisi;i++)
	{
		printf("eleman %d = %d\n",i,dizi[i]);
	}
	
    
    
 
 return 0;
}
