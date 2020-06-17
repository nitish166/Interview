class Solution {
public:
    string validIPAddress(string IP) {
        
        if(count(IP.begin(), IP.end(), '.')==3)
        {
            // Perform operatin on IPv4
            if(IP[IP.size()-1]=='.')
            {
                return "Neither";
            }
            stringstream ss(IP);
            string token;
            while(getline(ss, token, '.'))
            {
                if(token.length()==0 || token.length()>3) return "Neither";
                if(token[0]=='0' && token.length() !=1) return "Neither";
                for(char c: token) if(!isdigit(c)) return "Neither";
                if(stoi(token)>255) return "Neither";
            }
            return "IPv4";
        }
        else if(count(IP.begin(), IP.end(), ':')==7)
        {
            // Perform operation on IPV6
            if(IP[IP.size()-1] == ':') return "Neither";
            stringstream ss(IP);
            string token;
            while(getline(ss, token, ':'))
            {
                if(token.length()==0 || token.length()>4 ) return "Neither";
                for(char c: token) if(!isxdigit(c)) return "Neither";
            }
            return "IPv6";
        }
        else
        {
            return "Neither";
        }
        
        
        
    }
};