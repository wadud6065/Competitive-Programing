#include<iostream>
using namespace std;

int main()
{
    int con[3][3];
    bool result[3][3];

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            result[i][j] = true;

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin >> con[i][j];

    if(con[0][0]%2 != 0){
        result[0][0] = !result[0][0];
        result[0][1] = !result[0][1];
        result[1][0] = !result[1][0];
    }

    if(con[0][1]%2 != 0){
        result[0][1] = !result[0][1];
        result[0][0] = !result[0][0];
        result[0][2] = !result[0][2];
        result[1][1] = !result[1][1];
    }

    if(con[0][2]%2 != 0){
        result[0][1] = !result[0][1];
        result[1][2] = !result[1][2];
        result[0][2] = !result[0][2];
    }

    if(con[1][0]%2 != 0){
        result[1][0] = !result[1][0];
        result[1][1] = !result[1][1];
        result[0][0] = !result[0][0];
        result[2][0] = !result[2][0];
    }

    if(con[1][1]%2 != 0){
        result[1][0] = !result[1][0];
        result[1][2] = !result[1][2];
        result[0][1] = !result[0][1];
        result[1][1] = !result[1][1];
        result[2][1] = !result[2][1];
    }

    if(con[1][2]%2 != 0){
        result[1][2] = !result[1][2];
        result[0][2] = !result[0][2];
        result[1][1] = !result[1][1];
        result[2][2] = !result[2][2];
    }

    if(con[2][0]%2 != 0){
        result[2][0] = !result[2][0];
        result[1][0] = !result[1][0];
        result[2][1] = !result[2][1];
    }

    if(con[2][1]%2 != 0){
        result[2][1] = !result[2][1];
        result[1][1] = !result[1][1];
        result[2][0] = !result[2][0];
        result[2][2] = !result[2][2];
    }

    if(con[2][2]%2 != 0){
        result[2][2] = !result[2][2];
        result[1][2] = !result[1][2];
        result[2][1] = !result[2][1];
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(result[i][j])
                cout << "1";
            else cout << "0";
        }
        cout << "\n";
    }

    return 0;
}
