class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
     vector<vector<string> >ans;
      unordered_map<string,vector<string>>li;
      for(int i=0;i<string_list.size();i++){
          string anag=string_list[i];
          sort(anag.begin(),anag.end());
          li[anag].push_back(string_list[i]);
      }
      
      for(auto it:li){
          ans.push_back(it.second);
      }
      
      return ans;
      
    }
};
