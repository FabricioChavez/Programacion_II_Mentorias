#include <bits/stdc++.h>
using namespace std;
class Calculadora_S{
private:
    vector<double> sample_;
public:
     Calculadora_S()= default;
     explicit Calculadora_S(const vector<double> sample) : sample_(sample) {
     }

     double  Find_max(){

         double  Max = sample_[0];
         for(auto value : sample_)
         {
             if(Max < value)
                 Max=value;

         }

         return Max;
     }

     double Find_min(){
         double  Min = sample_[0];
         for(auto value : sample_)
         {
             if(Min > value)
                 Min=value;

         }

         return Min;
     }

     double  Find_mean(){

         double Sum = 0.0;
         for(auto value : sample_)
             Sum+=value;
         auto n=sample_.size();
         return  double(Sum)/double(n);

     }


      void Display_data(){
          for(auto value : sample_)
              cout<<setw(3)<<value<<" ";
          cout<<endl;
     }

     void Display_freq_table(){
         map<double , int> feq; //vector

         for(auto value : sample_)
         {
             if(feq.find(value) == feq.end())
                 feq[value]=1;
             else feq[value]++;
         }

         for (auto value : feq) {
             cout<<value.first<<" :";
             for (int i = 0; i < value.second; ++i) cout<<"*"<<" ";
             cout<<endl;
         }



     }







     ~Calculadora_S(){
         sample_.clear();
     }


};

int main(){

    int ai;


    vector<double> alfa{19 ,20 ,23, 22,23,23,23,23,22 ,21,21,21,21,21,10.5,11,11};

    Calculadora_S sample_1(alfa);
    sample_1.Display_data();
    cout<<" MAXIMO :"<< sample_1.Find_max()<<endl;
    cout<<" MINIMO :"<< sample_1.Find_min()<<endl;
    cout<<" MEDIA  :"<< sample_1.Find_mean()<<endl;
    cout<<endl;
    sample_1.Display_freq_table();
    
    return 0;
};