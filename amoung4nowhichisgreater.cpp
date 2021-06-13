#include<bits\stdc++.h>
using namespace std;

int main(){
    cout<<"Please enter 4 numbers : ";
    int a,b,c,d,largest;
    
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    if(a>b && a>c && a>d){
        largest=a;

        cout<<" greatest Value  is : ";
        cout<< a ;
        }
    
    else if(b>a && b>c && b>d){
        largest=b;
        cout<<" Greatest Value  is : ";
        cout<<  b ;
    }

    else if(c>a && c>b && c>d){
        largest=c;

        cout<<"greatest Value  is : ";
        cout<< c;
    }

    else if(d>a && d>b && d>c){
        largest=d;

        cout<<" greatest Value  is : ";
        cout<< d ;

    }
    cout<<endl;
    cout<<" Decending order values : ";
    if(largest==a){ 
        cout<<a;

        if(b>c&&b>d){
            cout<<b;
            if(c>d){
                cout<<c;
                cout<<d;

            }else{
                cout<<d;
                cout<<c;

            }
        }else if(c>b&&c>d){
            cout<<c;
            if(b>d){
                cout<<b;
                cout<<d;

            }else{
                cout<<d;
                cout<<b;
            }

        }else if(d>c&&d>b){
                    cout<<d;
                    if(d>c){
                        cout<<d;
                        cout<<c;

                    }else{
                        cout<<c;
                        cout<<d;

                    }
        }
    }else if(largest==b){
                cout<<b;
                if(c>a&&c>d){
                    cout<<c;
                    if(a>d){
                        cout<<a;
                        cout<<d;
                    }else{
                        cout<<d;
                        cout<<a;
                    }
                }else if(a>d&&a>c){
                        cout<<a;
                        if(d>c){
                            cout<<d;
                            cout<<c;
                        }else{
                            cout<<c;
                            cout<<d;
                        }
                }else if(d>a&&d>c){
                            cout<<d;
                            if(a>c){
                                cout<<a;
                                cout<<c;
                            }else{
                                cout<<c;
                                cout<<a;
                            }

                        }
                    
                
            }else if(largest==c){
                cout<<c;
                if(a>b&&a>d){
                    cout<<a;
                    if(b>d){
                        cout<<b;
                        cout<<d;

                    }else{
                        cout<<d;
                        cout<<b;

                    }
                }else if(b>c&&b>d){
                        cout<<b;
                        if(c>d){
                            cout<<c;
                            cout<<d;
                        }else{
                            cout<<d;
                            cout<<c;
                        }
                }else if(d>a&&d>b){
                            cout<<d;
                            if(a>d){
                                cout<<a;
                                cout<<d;
                            }else{
                                cout<<d;
                                cout<<a;
                            }

                }
            
            }else if(largest==d){
                cout<<d;
                if(a>b&a>c){
                    cout<<a;
                    if(b>c){
                        cout<<b;
                        cout<<c;
                    }else{
                        cout<<c;
                        cout<<b;

                    }
                }else if(b>a&&b>c){
                        cout<<b;
                        if(a>c){
                            cout<<a;
                            cout<<c;

                        }else{
                            cout<<c;
                            cout<<a;

                         }
                }else if(c>a&&c>b){
                            cout<<c;
                            if(a>b){
                                cout<<a;
                                cout<<b;

                            }else{
                                cout<<b;
                                cout<<a;
                            }
                }
                            
                        
                    
                }
            
            
}
    
    
      



