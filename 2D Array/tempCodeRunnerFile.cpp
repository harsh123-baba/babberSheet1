 for(int i = 0; i<v.size(); i++){
        for(int j = i;v[0].size(); j++){
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }