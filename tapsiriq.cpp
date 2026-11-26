1. 3 teref verilir. bu verilenlere asesen bu tereflerin ucbucaq yaradilib yaratdigini gosterir.
#include <isotream>
using namespace std;

int main(){
    int a, b, c;
    cout << "3 teref daxil edin: ";
    cin >> a >> b >> c;
    if (a|+ b > c && a + c > b && b + c > a){
        cout << "Ucbucaq yaratmaq olar";
    }
    else {
        cout << "Ucbucaq yaratmaq olmaz";
    }
     retrun 0;
}

2. 2 eded daxil edilir. bu ededlerden boyuyunu cap eden kodu yazin
int a, b;
    cout << "Iki teref daxil edin: ";
    cin >> a >> b ;
    if (a > b)  {
        cout << "Boyuk eded: " << a;
    }
    else if(b > a){
        cout << "Boyuk eded: " << b;
    }
    else {
        cout << "Ededler beraberdir";                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    }