/*
 Using emplace: emplace is also used to insert the pairs into the map. This function is similar to “insert()” discussed above, the only difference being that the “in-place” construction of the pair takes place at the position of element insertion contrary to insert() which copies or movies existing objects. 

emplace(): Inserts pairs using an in-place construction strategy. Increases the size of the map by 1. returns a pointer pair. 1st element of which is an iterator pointing to the position of inserted pair. 2nd returns a boolean variable indicating an already present or newly created pair.
Time complexity: log(n) (n is the size of the map)
emplace_hint(): Takes a “hint_iterator” to get a hint of the position of insertion to possibly reduce the time required to insert the pair inserted. This does not affect the position of insertion. It takes place where it is defined internally.
Time complexity: log(n) (n is the size of the map), if the hint is optimal then O(1)
*/