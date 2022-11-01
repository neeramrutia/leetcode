class Solution {
    ArrayList<String> list = new ArrayList<>();
    public List<String> generateParenthesis(int n) {
        
        String s="";
        helper(s,0,0,n);
        return list;
        
    }
    
    public void helper(String s,int open,int close,int maximum)
    {
        if(open==close && open==maximum)
        {
            list.add(s);
        }
        
        if(open<maximum)
        {
            helper(s+"(",open+1,close,maximum);
        }
        if(close<open)
        {
            helper(s+")",open,close+1,maximum);
        }
    }
}