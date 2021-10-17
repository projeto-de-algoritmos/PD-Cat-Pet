#include <bits/stdc++.h>
using namespace std;

int calc_valor(vector<int> price){
    vector<int> memo(price.size(), -1);
    function<int(int)> maximum = [&](int pos){
        if(memo[pos] != -1) return memo[pos];
        if(pos == 0) return memo[pos] = price[0];
        if(pos == 1) return memo[pos] = max(price[0], price[1]);
        return memo[pos] = max(
            maximum(pos - 1),
            maximum(pos - 2) + price[pos]
        );
    };
    return maximum(price.size() - 1);
}


vector<int> calc_posicao(vector<int> price){
    vector<int> memo(price.size(), -1);
    function<int(int)> maximum = [&](int pos){
        if(memo[pos] != -1) return memo[pos];
        if(pos == 0) return memo[pos] = price[0];
        if(pos == 1) return memo[pos] = max(price[0], price[1]);
        return memo[pos] = max(
            maximum(pos - 1),
            maximum(pos - 2) + price[pos]
        );

    };

    int answer = maximum((int)price.size() - 1);
    vector<int> solution;
    // [0, pos]
    function<void(int)> recover = [&](int pos){
        if(pos < 0)
            return;
        if(pos == 0){
            solution.push_back(0);
            return;
        }
        int ans_pos = maximum(pos);
        int ans_pos_1 = maximum(pos - 1);
        if(ans_pos == ans_pos_1){
            recover(pos - 1);
            return;
        }
        solution.push_back(pos);
        recover(pos - 2);
    };
    recover((int)price.size() - 1);

    int solution_sum = 0;
    for(int pos : solution){
        solution_sum += price[pos];
    }
    assert(solution_sum == answer);

    return solution;
    
}

void show(vector<int> sol){
    for(int pos : sol)
        cout << pos << " ";
    cout << endl;
}


void menu(){


cout<<"●▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ஜ۩۞۩۩۞۩۩۞۩۩۞۩ஜ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬●"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██░▀██████████████▀░██░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█▌▒▒░████████████░▒▒▐█░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░▒▒▒░██████████░▒▒▒░█░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█▌░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▐░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░████▀▀▀██▄▒▒▒▒▒▒▒▄██▀▀▀██░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░███░░░▐█░▀█▒▒▒▒▒█▀░█▌░░░█░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░▐▌░░░▐▄▌░▐▌▒▒▒▐▌░▐▄▌░░▐░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░██░░░▐█▌░░▌▒▒▒▐░░▐█▌░░█░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░█▒▀▄▄▄█▄▄▄▌░▄░▐▄▄▄█▄▄▀▒░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░░░░░░░░░└┴┘░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░███▄▄░░░░░░░░░░░░░░▄▄██░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░█████████▒▒▒▒▒▒████████░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░██▀░░███▒▒░░▒░░▒▀██████░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░██▒░███▒▒╖░░╥░░╓▒▐█████░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░██▒░▀▀▀░░║░░║░░║░░█████░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░██▄▄▄▄▀▀┴┴╚╧╧╝╧╧╝┴┴███░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░███████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░Sejam bem-vindo a CAT Solution░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
cout<<"●▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ஜ۩۞۩۩۞۩۩۞۩۩۞۩ஜ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬●"<<endl;
  
}

void cadeiras(){


cout<<"         ┈┈┈╲┈┈┈┈╱-┈┈┈┈┈┈"<<endl;
cout<<"         ┈┈┈╱     ▔▔╲┈┈┈┈"<<endl;
cout<<"         ┈┈┃┈▇┈┈▇┈┃┈┈┈┈┈┈"<<endl;
cout<<"         ╭╮┣━━━━━━┫╭╮┈┈┈┈"<<endl;
cout<<"         ┃┃┃┈┈┈┈┈┈┃┃┃┈┈┈┈"<<endl;
cout<<"         ╰╯┃┈┈┈┈┈┈┃╰╯┈┈┈┈"<<endl;
cout<<"         ┈┈╰┓┏━━┓┏╯┈┈┈┈┈┈"<<endl;
cout<<"         ┈┈┈╰╯┈┈╰╯┈┈┈┈┈┈┈";


}





int main(){

    int quantidade = 0, valor =0;
    int  cadeiras_total [100]={0};

    menu();

    
    cout << "Digite o tamaho da fila"<<endl;

    cin >> quantidade;

    cout << "Digite o valor da consulta do pet "<<endl;
    cin>>valor;

    cout << "Formato da fila "<<endl;
     

    for(int i =0; i< quantidade; i++){
       
        cadeiras();
        cout<<endl;
    }



    //show(calc_posicao({10, 4, 4, 10, 25}));
    //cout<<calc_valor({10, 4, 4, 10, 25})<<endl;
     

    return 0;
}