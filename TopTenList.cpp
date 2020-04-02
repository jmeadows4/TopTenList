//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList()
{
    _list.resize(10);
}

void TopTenList::display_forward(){
    for(int i = 0; i < _list.size(); i++){
      cout<< i + 1 << ". "<< _list[i].text << endl;
    }
}
void TopTenList::display_backward(){
    for(int i = _list.size()-1; i >= 0; i--){
      cout<< i + 1 << ". "<< _list[i].text << endl;
    }
}

void TopTenList::set_at(int index, Hyperlink link)
{
    _list.at(index-1) = link;
}

Hyperlink TopTenList::get(int index)
{
    return _list.at(index-1);
}
