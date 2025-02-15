void explainList() {
    list<int>ls;
    ls = {1,2,3} ;
    ls.push_back(4);
    ls.emplace_back(4);
}
// note emplace back is faster than the push back
// function