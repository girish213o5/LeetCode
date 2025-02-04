class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>check (rooms.size(),false);
        queue <int>q;
        q.push(0);
        check[0]=true;
        while(q.size())
        {
            int n= q.front();
            q.pop();
            for(auto i : rooms[n])
            {
                if(check[i]==false)
                {
                    check[i]=true;  
                    q.push(i); 
                }
            }
        }
            for(int i=0 ; i <rooms.size() ; i++)
                if(check[i]==false)
                    return false;
    return true;
    }
};