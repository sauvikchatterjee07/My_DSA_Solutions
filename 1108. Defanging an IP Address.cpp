    string defangIPaddr(string address) {
        string defang = "";
        for(auto c: address){
            (c=='.') ? defang += "[.]" : defang+=c;
        }
        
        return defang;
    }
