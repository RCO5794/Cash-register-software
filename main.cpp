#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int pencil = 15;
    int Eraser = 10;
    int crayon = 20;
    int marker = 25;
    int ruler = 20;
    int scissors = 40;
    int a,b,c,d,e,f;
    
    int Revenue = 0;
    int at =0;
    int bt =0;
    int ct =0;
    int dt =0;
    int et =0;
    int ft =0;
    for(int i=1;i<=99;i++){
    cout << "welcome to my stationery store！！"<<endl;
    cout << "=================================="<<endl;
    
    cout << "Please enter the quantity of each item:"<<endl;
    cout << "pencil | 15 Dollar | 1pic: ";
    cin >> a;
    cout << "Eraser | 10 Dollar | 1pic: ";
        cin >> b;
    cout << "Crayon | 20 Dollar | 1pic: ";
    cin >> c;
    cout << "Marker | 25 Dollar | 1pic: ";
    cin >> d;
    cout << "Ruler | 20 Dollar | 1pic: ";
    cin >> e;
    cout << "Scissors | 40 Dollar | 1pic: ";
    cin >> f;
    cout << "=================================="<<endl;
    
    
    
    
    cout << "This is your bill"<<endl;
    
    cout << "pencil *"<<setw(2)<< a <<" = "<<a*pencil<<endl;
    cout << "Eraser *"<<setw(2)<< b <<" = "<<b*Eraser<<endl;
    cout << "crayon *"<<setw(2)<< c <<" = "<<c*crayon<<endl;
    cout << "marker *"<<setw(2)<< d <<" = "<<d*marker<<endl;
    cout << "ruler *"<<setw(2)<< e <<" = "<<e*ruler<<endl;
    cout << "scissors *"<<setw(2)<< f <<" = "<<f*scissors<<endl;
    int total = a*pencil+b*Eraser+c*crayon+d*marker+e*ruler+f*scissors;
    cout << "Total: " <<setw(2)<< total <<" Dollar"<<endl;
    
    
    cout << "=================================="<<endl;
    int cmoney;
    cout << "You paid : ";
    cin >> cmoney;
    cout << cmoney-total << " dollars for change"<<endl;
    cout << "Thank you for coming"<<endl;
    cout << "Please enter 99 to checkout or enter 1 to continue！";
    cin >> i;
    cout << string(50, '\n');
        at = at+a;
        bt = bt+b;
        ct = ct+c;
        dt = dt+d;
        et = et+e;
        ft = ft+f;
        Revenue = total+Revenue;
    };
    cout << "=================================="<<endl;
    
    cout << "Pencil : " << at <<endl;
    cout << "Eraser : " << bt <<endl;
    cout << "Crayon : " << ct <<endl;
    cout << "Marker : " << dt <<endl;
    cout << "Ruler : " << et <<endl;
    cout << "Scissors : " << ft <<endl;
    cout << "=================================="<<endl;
    cout << "Revenue : " <<   Revenue <<" Dollar"<<endl;
    return 0;
}
