//
//  My_cst.hpp
//  
//
//  Created by Adrien Gide on 2019/05/21.
//

#ifndef repeat_hpp
#define repeat_hpp

#define MAX_NODES 40
#define MAX_CHILDREN 40


#include <stdio.h>
#include <iostream>
#include <sdsl/suffix_trees.hpp>
#include <vector>

typedef sdsl::cst_sct3<> cst_t;

class My_cst : public cst_t
{
public:
    typedef sdsl::cst_bfs_iterator<cst_t> iterator;
    typedef std::map<size_type, std::vector<std::pair<char,int>> > pos_type;
    typedef std::map<size_type, std::vector<std::pair< std::pair<int,int>, std::pair<int,int>> > > results_type;

private:
    
    cst_t cst;
    std::pair<char,int> position;
    pos_type map_pos;
    results_type results_array;
    const char* name_f;

    
public:
    
    void A(node_type v, char c);
    void repeat(char* name_file);
    bool get_i(char c,node_type v);
    void printlist();
};


#endif /* repeat_hpp */