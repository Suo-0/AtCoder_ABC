    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<set>
    using namespace std;

    int main(){
        int n;
        cin >> n;
        vector<pair<int,int>> valueIn(n), valueCost(n);
        set<int> index;
        for(int i = 0; i < n; i++){
            cin >> valueIn[i].first >> valueCost[i].second;
            valueCost[i].first = valueIn[i].first;
            valueIn[i].second = i+1;
            index.insert(i+1);
        }
        sort(valueIn.rbegin(), valueIn.rend());
        sort(valueCost.rbegin(), valueCost.rend());

        int min=valueCost[0].second;
        for(int i = 1; i < n; i++){
            if(min < valueCost[i].second){index.erase(valueIn[i].second);}
            else{min = valueCost[i].second;}
        }

        cout << index.size() << endl;
        for(auto it = index.begin(); it != index.end(); it++){
            if(it == --index.end()){cout << *it << std::endl;}
            else{cout << *it << ' ';}
        }

        return 0;
    }