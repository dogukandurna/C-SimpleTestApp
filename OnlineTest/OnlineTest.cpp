#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sorular[] = { "6+4=?" , "10+10=?", "10+5=?" };
    string A[3] = { "10", "22", "16" };//a şıkkı
    string B[3] = { "8", "20", "14" };//b şıkkı
    string C[3] = { "9", "23", "15" };//c şıkkı
    string y[3] = { "A", "B", "C" };//dogru cevap
    string z[3] = { "","","" };//kullanici verecegi cevap
    string sinavbitir, sorusayisi;
    int dsay = 0, ysay = 0, bsay = 0,i=0;
    while (sinavbitir!="E")
    {
    enbas:
        while (i<3)
        {
            if (i==0)
            {
                cout << "Soru" << i+1 << ":" << sorular[i] << " Lutfen cevap giriniz veya gitmek istediginiz soru numarisini yaziniz(Lutfen Buyuk Harf Kullaniniz)(Bos birakmak istiyorsaniz lutfen BOS yaziniz)" << endl;
                cout << "A) " + A[i] << " B) " + B[i] << " C) " + C[i] << endl;
                if (z[i] != "" && z[i] != "2" && z[i] != "3" && z[i] != "1" && z[i] != "BOS")
                {
                    cout << "Once ki cevabiniz: " + z[i] << endl;
                    cout << "Cevabiniz: ";
                    cin >> z[i];
                }
                else
                {
                    cout << "Cevabiniz: ";
                    cin >> z[i];
                }
                if (z[i] == "2")
                {
                    i = stoi(z[i])-1;
                    goto enbas;
                }
                else if (z[i] == "1")
                {
                    i = stoi(z[i])-1;
                    goto enbas;
                }
                else if (z[i] == "3")
                {
                    i = stoi(z[i])-1;
                    goto enbas;
                }
                else if (z[i] != "A" && z[i] != "B" && z[i] != "C" && z[i] != "BOS" && z[i] != "2" && z[i] != "3" && z[i] != "1")
                {
                    cout << "Hatali cevap verdiniz. Lutfen Tekrar Deneyin" << endl;
                    goto enbas;
                }
                i++;
            }
            else
            {
                cout << "Soru" << i+1 << ":" << sorular[i] << " Lutfen cevap giriniz veya gitmek istediginiz soru numarisini yaziniz(Lutfen Buyuk Harf Kullaniniz)(Bos birakmak istiyorsaniz lutfen BOS yaziniz)" << endl;
                cout << "A) " + A[i] << " B) " + B[i] << " C) " + C[i] << endl;
                if (z[i] != "" && z[i] != "2" && z[i] != "3" && z[i] != "1" && z[i] != "BOS")
                {
                    cout << "Once ki cevabiniz: " + z[i] << endl;
                    cout << "Cevabiniz: ";
                    cin >> z[i];
                }
                else
                {
                    cout << "Cevabiniz: ";
                    cin >> z[i];
                }
                if (z[i] == "2")
                {
                    i = stoi(z[i]) - 1;
                    goto enbas;
                }
                else if (z[i] == "1")
                {
                    i = stoi(z[i]) - 1;
                    goto enbas;
                }
                else if (z[i] == "3")
                {
                    i = stoi(z[i]) - 1;
                    goto enbas;
                }
                else if (z[i] != "A" && z[i] != "B" && z[i] != "C" && z[i] != "BOS" && z[i] != "2" && z[i] != "3" && z[i] != "1")
                {
                    cout << "Hatali cevap verdiniz. Lutfen Tekrar Deneyin" << endl;
                    goto enbas;
                }
                i++;
            }
        }
        btrsoru:
        cout << "Sinavi bitirmek istiyor musunuz? (Evet:E, Hayir:H)" << endl;
        cin >> sinavbitir;
        if (sinavbitir == "E")
        {
            cout << "Cevaplariniz:" << endl;
            for (int i = 1; i < 4; i++) // KULLANICI CEVAP
            {
                if (z[i - 1]=="2" || z[i - 1] == "1" || z[i - 1] == "3" || z[i - 1]=="")
                {
                    z[i - 1] = "BOS";
                }
                cout << i << "." + z[i - 1] << endl;
            }
            for (int i = 1; i < 4; i++) // SORU CEVAPLARI
            {
                cout << "Soru" << i << " Cevabi: " << y[i - 1] << endl;
            }
            for (int i = 0; i < 3; i++) // D Y B SAY
            {
                if (z[i] == y[i])
                {
                    dsay++;
                }
                else if (z[i] == "BOS" || z[i] == "2" || z[i] == "3" || z[i] == "1")
                {
                    bsay++;
                }
                else
                {
                    ysay++;
                }
            }
            cout << "Dogru sayisi: " << dsay << endl;
            cout << "Yanlis sayisi: " << ysay << endl;
            cout << "Bos sayisi: " << bsay << endl;
            i++;
        }
        else if (sinavbitir == "H")
        {
            cout << "Lutfen Gitmek Istediginiz Sorunun Numarasini Yaziniz:" << endl;
            cin >> sorusayisi;
            if (sorusayisi == "1")
            {
                i = 0;
                goto enbas;
            }
            else if (sorusayisi == "2")
            {
                i = 1;
                goto enbas;
            }
            else if (sorusayisi == "3")
            {
                i = 2;
                goto enbas;
            }
        }
        else
        {
            cout << "Hatalı giriş yaptiniz. Lutfen tekrar deneyin";
            goto btrsoru;
        }
    }
}