#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char kullaniciAdi[20];
    char sifre[20];
    
    int sporDali,seansSaatleri,yoneticiSecenekleri,yetki,calisanSecenekleri,kocSecenekleri,vipSecenekleri;
    
    printf("Kullanici adi giriniz:");
    scanf("%s",kullaniciAdi);
    
    printf("Lutfen sifrenizi giriniz:");
    scanf("%s",sifre);
    
    printf("\n************\n");
    
//uyeler*********************************************************************************************************************************************************************************
//1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

    if(strcmp(kullaniciAdi,"yigido")==0 && strcmp(sifre,"5959")==0)
	 {
        printf("TUNA SPOR SALONUNA HOS GELDINIZ.\n");
        
        printf("Lutfen Yapilacak Islemi Seciniz.\n************\n");
        
        printf("Spor Dali Seciniz:\nFitness icin 1\nYuzme icin 2\n************\n");
        scanf("%d",&sporDali);
        
        switch(sporDali) {
        case 1:
            printf("Seans Seciniz.\n08:00-16:00 icin 1\n16:00-20:00 icin 2\n************\n");
            scanf("%d",&seansSaatleri);
            
            printf("Seansiniz Onaylanmistir.\n");
            break;
        case 2:
            printf("Seans Seciniz.\n07:00-08:00 icin 1\n20:00-21:00 icin 2\n************\n");
            scanf("%d",&seansSaatleri);
            
            printf("Seansiniz Onaylanmistir.");
            break;
        }
    }
//2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222

    else if(strcmp(kullaniciAdi,"ozgedesu")==0 && strcmp(sifre,"9999")==0)
    {
        printf("TUNA SPOR SALONUNA HOS GELDINIZ.\n");
        
        printf("Lutfen Yapilacak Islemi Seciniz.\n************\n");
        
        printf("Spor Dali Seciniz:\nFitness icin 1\nYuzme icin 2\n************\n");
        scanf("%d",&sporDali);
        
        switch(sporDali) 
		{
			
        case 1:
            printf("Seans Seciniz.\n08:00-16:00 icin 1\n16:00-20:00 icin 2\n************\n");
            scanf("%d",&seansSaatleri);
            
            printf("Seansiniz Onaylanmistir.\n");
            break;
            
        case 2:
            printf("Seans Seciniz.\n07:00-08:00 icin 1\n20:00-21:00 icin 2\n************\n");
            scanf("%d",&seansSaatleri);
            
            printf("Seansiniz Onaylanmistir.");
            break;
        }
    }
//3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333

    else if(strcmp(kullaniciAdi,"elsu")==0 && strcmp(sifre,"0000")==0) 
	{
        printf("TUNA SPOR SALONUNA HOS GELDINIZ.\n");
        
        printf("Lutfen Yapilacak Islemi Seciniz.\n************\n");
        
        printf("Spor Dali Seciniz:\nFitness icin 1\nYuzme icin 2\n************\n");
        scanf("%d",&sporDali);
        
        switch(sporDali) {
        case 1:
            printf("Seans Seciniz.\n08:00-16:00 icin 1\n16:00-20:00 icin 2\n************\n");
            scanf("%d",&seansSaatleri);
            
            printf("Seansiniz Onaylanmistir.\n");
            break;
        case 2:
            printf("Seans Seciniz.\n07:00-08:00 icin 1\n20:00-21:00 icin 2\n************\n");
            scanf("%d",&seansSaatleri);
            
            printf("Seansiniz Onaylanmistir.");
            break;
        }
    }
//444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444

    else if(strcmp(kullaniciAdi,"aasu")==0 && strcmp(sifre,"0001")==0) 
	{
        printf("TUNA SPOR SALONUNA HOS GELDINIZ.\n");
        
        printf("Lutfen Yapilacak Islemi Seciniz.\n************\n");
        
        printf("Spor Dali Seciniz:\nFitness icin 1\nYuzme icin 2\n************\n");
        scanf("%d",&sporDali);
        
        switch(sporDali) 
		{
			
        case 1:
            printf("Seans Seciniz.\n08:00-16:00 icin 1\n16:00-20:00 icin 2\n************\n");
            scanf("%d",&seansSaatleri);
            
            printf("Seansiniz Onaylanmistir.\n");
            break;
            
        case 2:
            printf("Seans Seciniz.\n07:00-08:00 icin 1\n20:00-21:00 icin 2\n************\n");
            scanf("%d",&seansSaatleri);
            
            printf("Seansiniz Onaylanmistir.");
            break;
        }
    }
//yonetici ************************************************************************************************************************************************************************************************

    else if(strcmp(kullaniciAdi,"tunaydin")==0 && strcmp(sifre,"2143")==0) 
	{
        printf("Uye Listesi Goruntule:1\nCalisan Listesi Goruntule:2\nSpor Kocu Listesi Goruntule:3\nSeans Saatlerini Goruntule:4\nYetkiler:5\nVIP Uyeleri Goruntule:6\n************\n");
        scanf("%d",&yoneticiSecenekleri);
        
        switch(yoneticiSecenekleri) 
		{
			
        case 1:
            printf("Uyeler:\nYigit Akgun:Yuzme(07:00-8:00)\nOzge Ozturk:Yuzme(20:00-21:00)\nElif Komur:Fitness(08:00-16:00)\nAsude Din:Fitness(16:00-20:00)");
            break;
            
        case 2:
            printf("Calisanlar:\nMahmut Dastan:Pazartesi\nDogukan Tanir:Sali\nYasin Kara:Carsamba\nEngin Mert:Persembe\nKadir:Cuma\n");
            break;
            
        case 3:
            printf("Spor Koclari:\\Melih Dagyutan:Yuzme(Sabahci)\nGorkem Komur:Yuzme(Aksamci)\nMuhammet Bekkaya:Fitness(Sabahci)\nBaris Komur:Fitness(Aksamci)");
            break;
            
        case 4:
            printf("Seans Saatleri:\\Fitness\nSabah Seansi:08:00-16:00\nAksam Seansi:16:00-20:00\nYuzme\nSabah Seansi:07:00-08:00\nAksam Seansi:20:00-21:00");
            break;
            
        case 5:
            printf("VIP Yapilacak Bir Uye Seciniz:\nY�g�t Akgun->1\nOzge Ozturk->2\nElif Komur->3\nAsude Din->4\n************\nG");
            scanf("%d",&yetki);
            
            switch(yetki) 
			{
            case 1:
                printf("Yigit Akgun basariyle VIP olarak yetkilendirilmistir.");
                break;
                
            case 2:
                printf("Ozge Ozturk basariyla VIP olarak yetkilendirilmistir.");
                break;
                
            case 3:
                printf("Elif Komur basariyla VIP olarak yetkilendirilmistir.");
                break;
                
            case 4:
                printf("Asude Din basariyla VIP olarak yetkilendirilmistir.");
                break;
                
            }
        case 6:
            printf("VIP Uyeler\n************\n-Emirhan Kural\n-Mahmut Kural");
            break;
            
        default:
            printf("Yanlis tuslama yaptiniz.");
        }
    }
//calisan********************************************************************************************************************************************************************************************************
//1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

    else if(strcmp(kullaniciAdi,"dasmaho")==0 && strcmp(sifre,"1111")==0) 
	{
        printf("Mesai Gunu->1\nKontrole Gonderilen Spor Aletleri->2\nKontrolden Gelen Spor Aletleri->3\nKontrole Gonderilmesi Gerekilen Spor Aletleri->4\n************\n");
        scanf("%d",&calisanSecenekleri);
        
        switch(calisanSecenekleri) 
		{
        case 1:
            printf("Bu hafta mesai gununuz:Pazartesi\n************\nIyi Calisamalar Dileriz.");
            break;
            
        case 2:
            printf("Beklenen Spor Aletleri:\\Yuruyus Bandi\nSeated Chest Pres\nPectoral Fly\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        case 3:
            printf("Kontrolden Gelen Spor Aletleri:\nShoulder Press\nDeltoid Raise\nSeated Row\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        case 4:
            printf("Kontrole Gonderilmesi Gereken Aletler:\nSmith Machine Decline\nSmith Machine Incline\nBiceps Curl\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
        }
    }
//2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222

    else if(strcmp(kullaniciAdi,"tanirdogu")==0 && strcmp(sifre,"2222")==0) 
	{
        printf("Mesai Gunu->1\nKontrole Gonderilen Spor Aletleri->2\nKontrolden Gelen Spor Aletleri->3\nKontrole Gonderilmesi Gerekilen Spor Aletleri->4\n************\n");
        scanf("%d",&calisanSecenekleri);
        
        switch(calisanSecenekleri) 
		{
        case 1:
            printf("Bu hafta mesai gununuz:Pazartesi\n************\nIyi Calisamalar Dileriz.");
            break;
            
        case 2:
            printf("Beklenen Spor Aletleri:\\Yuruyus Bandi\nSeated Chest Pres\nPectoral Fly\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        case 3:
            printf("Kontrolden Gelen Spor Aletleri:\nShoulder Press\nDeltoid Raise\nSeated Row\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        case 4:
            printf("Kontrole Gonderilmesi Gereken Aletler:\nSmith Machine Decline\nSmith Machine Incline\nBiceps Curl\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        }
    }
//3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333

    else if(strcmp(kullaniciAdi,"darkyasuo")==0 && strcmp(sifre,"3333")) 
	{
        printf("Mesai Gunu->1\nKontrole Gonderilen Spor Aletleri->2\nKontrolden Gelen Spor Aletleri->3\nKontrole Gonderilmesi Gerekilen Spor Aletleri->4\n************\n");
        scanf("%d",&calisanSecenekleri);
        
        switch(calisanSecenekleri) 
		{
        case 1:
            printf("Bu hafta mesai gununuz:Pazartesi\n************\nIyi Calisamalar Dileriz.");
            break;
            
        case 2:
            printf("Beklenen Spor Aletleri:\\Yuruyus Bandi\nSeated Chest Pres\nPectoral Fly\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        case 3:
            printf("Kontrolden Gelen Spor Aletleri:\nShoulder Press\nDeltoid Raise\nSeated Row\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        case 4:
            printf("Kontrole Gonderilmesi Gereken Aletler:\nSmith Machine Decline\nSmith Machine Incline\nBiceps Curl\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
        }
    }
//44444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444

    else if(strcmp(kullaniciAdi,"turko")==0 && strcmp(sifre,"4444")) 
	{
        printf("Mesai Gunu->1\nKontrole Gonderilen Spor Aletleri->2\nKontrolden Gelen Spor Aletleri->3\nKontrole Gonderilmesi Gerekilen Spor Aletleri->4\n************\n");
        scanf("%d",&calisanSecenekleri);
        
        switch(calisanSecenekleri) 
		{
        case 1:
            printf("Bu hafta mesai gununuz:Pazartesi\n************\nIyi Calisamalar Dileriz.");
            break;
            
        case 2:
            printf("Beklenen Spor Aletleri:\\Yuruyus Bandi\nSeated Chest Pres\nPectoral Fly\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        case 3:
            printf("Kontrolden Gelen Spor Aletleri:\nShoulder Press\nDeltoid Raise\nSeated Row\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        case 4:
            printf("Kontrole Gonderilmesi Gereken Aletler:\nSmith Machine Decline\nSmith Machine Incline\nBiceps Curl\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        }
    }
//55555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555

    else if(strcmp(kullaniciAdi,"bigboy")==0 && strcmp(sifre,"5555")==0) 
	{
        printf("Mesai Gunu->1\nKontrole Gonderilen Spor Aletleri->2\nKontrolden Gelen Spor Aletleri->3\nKontrole Gonderilmesi Gerekilen Spor Aletleri->4\n************\n");
        scanf("%d",&calisanSecenekleri);
        
        switch(calisanSecenekleri) 
		{
        case 1:
            printf("Bu hafta mesai gununuz:Pazartesi\n************\nIyi Calisamalar Dileriz.");
            break;
            
        case 2:
            printf("Beklenen Spor Aletleri:\\Yuruyus Bandi\nSeated Chest Pres\nPectoral Fly\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        case 3:
            printf("Kontrolden Gelen Spor Aletleri:\nShoulder Press\nDeltoid Raise\nSeated Row\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
            
        case 4:
            printf("Kontrole Gonderilmesi Gereken Aletler:\nSmith Machine Decline\nSmith Machine Incline\nBiceps Curl\n************\nCalismalariniz Icin Tesekkur Ederiz.");
            break;
        }
    }
//koclar********************************************************************************************************************************************************************************************************
//11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

    else if(strcmp(kullaniciAdi,"petito")==0 && strcmp(sifre,"6363")==0) 
	{
        printf("Vardiya Sorgula->1\nVIP Uye Sorgulama->2\n************\n");
        scanf("%d",&kocSecenekleri);
        
        switch(kocSecenekleri) 
		{
        case 1:
            printf("07:00-14:00(Sabahci)\n************\nIyi Calisamalar Dileriz.");
            break;
            
        case 2:
            printf("VIP Uyeler:\nEmirhan Kural\nMahmut Kural\n************\nIyi Calisamalar Dileriz.");
            break;
            
        }
    }
//222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222

    else if(strcmp(kullaniciAdi,"necro")==0 && strcmp(sifre,"6666")) 
	{
        printf("Vardiya Sorgula->1\nVIP Uye Sorgulama->2\n************\n");
        scanf("%d",&kocSecenekleri);
        
        switch(kocSecenekleri) 
		{
        case 1:
            printf("07:00-14:00(Sabahci)\n************\nIyi Calisamalar Dileriz.");
            break;
            
        case 2:
            printf("VIP Uyeler:\nEmirhan Kural\nMahmut Kural\n************\nIyi Calisamalar Dileriz.");
            break;
        }
    }
//333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333
    else if(strcmp(kullaniciAdi,"ykke")==0 && strcmp(sifre,"7777")) 
	{
        printf("Vardiya Sorgula->1\nVIP Uye Sorgulama->2\n************\n");
        scanf("%d",&kocSecenekleri);
        
        switch(kocSecenekleri) 
		{
        case 1:
            printf("07:00-14:00(Sabahci)\n************\nIyi Calisamalar Dileriz.");
            break;
            
        case 2:
            printf("VIP Uyeler:\nEmirhan Kural\nMahmut Kural\n************\nIyi Calisamalar Dileriz.");
            break;   
        }
    }
//44444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444

    else if(strcmp(kullaniciAdi,"ryancooper")==0 && strcmp(sifre,"8888")) 
	{
        printf("Vardiya Sorgula->1\nVIP Uye Sorgulama->2\n************\n");
        scanf("%d",&kocSecenekleri);
        
        switch(kocSecenekleri) 
		{
        case 1:
            printf("07:00-14:00(Sabahci)\n************\nIyi Calisamalar Dileriz.");
            break;
            
        case 2:
            printf("VIP Uyeler:\nEmirhan Kural\nMahmut Kural\n************\nIyi Calisamalar Dileriz.");
            break;
        }
    }
//vip********************************************************************************************************************************************************************************************************
//111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

    else if(strcmp(kullaniciAdi,"tunemirz")==0 && strcmp(sifre,"6161")==0) 
	{
        printf("TUNA SPOR SALONUNA HOS GELDINIZ EMIRHAN BEY.\n");
        
        printf("Lutfen Yapilacak Islemi Seciniz.\n************\n");
        
        printf("Seans Sec:1\nBireysel Koc Calisma Saatleri:2\n************\n");
        scanf("%d",&vipSecenekleri);
        
        switch(vipSecenekleri) 
		{
        case 1:
            printf("Fitness Seans Saatleri:08:00-16:00 icin 1\n16:00-20:00 icin 2\n************\nYuzme Seans Saatleri:07:00-08:00 icin 3\n20:00-21:00 icin 4\n************\n");
            scanf("%d",&seansSaatleri);
            
            if(seansSaatleri==1||2||3||4)
		    {
                printf("Seansiniz Onaylanmistir.");
            } 
            
			else 
			{
                printf("Hatali Tuslama Yaptiniz.");
            }
            break;
            
        case 2:
            printf("Melih Dagyutan:Yuzme(Sabahci)\nGorkem Komur:Yuzme(Aksamci)\nMuhammet Bekkaya:Fitness(Sabahci)\nBaris Komur:Fitness(Aksamci)");
            break;
        }
    }
//222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222

    else if(strcmp(kullaniciAdi,"therule")==0 && strcmp(sifre,"1001")==0) 
	{
        printf("TUNA SPOR SALONUNA HOS GELDINIZ MAHMUT BEY.\n************\n");
        
        printf("Lutfen Yapilacak Islemi Seciniz.\n************\n");
        
        printf("Seans Sec:1\nBireysel Koc Calisma Saatleri:2\n************\n");
        scanf("%d",&vipSecenekleri);
        
        switch(vipSecenekleri) 
		{
        case 1:
            printf("Fitness Seans Saatleri:08:00-16:00 icin 1\n16:00-20:00 icin 2\n************\nYuzme Seans Saatleri:07:00-08:00 icin 3\n20:00-21:00 icin 4\n************\n");
            scanf("%d",&seansSaatleri);
            
            if(seansSaatleri==1||2||3||4) 
			{
                printf("Seansiniz Onaylanmistir.");
            } 
			
			else 
			{
                printf("Hatali Tuslama Yaptiniz.");
            }
            break;
            
        case 2:
            printf("Melih Dagyutan:Yuzme(Sabahci)\nGorkem Komur:Yuzme(Aksamci)\nMuhammet Bekkaya:Fitness(Sabahci)\nBaris Komur:Fitness(Aksamci)");
            break;
        }
    } 
	else 
	{
        printf("Kullanici bilgileri uyusmamaktadir.");
    }
    return 0;
}
