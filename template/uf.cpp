int find(ve<int>& nums, int x){
  if(nums[x] == x) return x;
  int root = find(nums[x], x);
  nums[x] = root;
  return root;
}
