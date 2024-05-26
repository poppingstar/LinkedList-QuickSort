#include <iostream>
#include <vector>
#include <memory>
using namespace std;

template<typename T>
void quicksort(vector<T>& v, int l, int r){
  if(l >= r) return;              //인자가 잘못되었거나, 하나일 경우를 베이스케이스로 세팅.
  int pivot = v.at(r), i=l-1;     //마지막 원소를 피벗으로 설정한다.
  for(int j=l; j<r; ++j){         //임시 객체 생성이 없는 전위 증가 연산자가 더 빠르다.
    if(v.at(j) < pivot)           //피벗보다 작은 원소를 피벗의 왼쪽으로 옮긴다.
      swap(v.at(++i), v.at(j));
  }
  swap(v.at(++i), v.at(r));         //피벗을 맞는 위치로 옮긴다.
  
  quicksort(v, l, i-1);           //피벗보다 작은 원소들을 재귀적으로 정렬한다.
  quicksort(v, i+1, r);           //피벗보다 큰 원소들을 재귀적으로 정렬한다.
}

template<typename T>
//worst case의 시간복잡도가 O(n^2)이므로, worst case를 피하기 위해 세 수의 중간값을 구한다
int selectMidian(vector<T>& v, int first, int last){
  int middle = (first+last)/2;
  if(v.at(first)>v.at(middle))
    swap(v.at(first), v.at(middle));
  if(v.at(middle)>v.at(last))
    swap(v.at(middle), v.at(last));
  return middle;
}

//최악의 경우를 줄이기 위한 퀵소트
template<typename T>
void middlePivotQuicksort(vector<T>& v, int l, int r){    
  if(l>=r) return;
  
  int pivot=v.at(selectMidian(v, l, r)), smallerThenPivot=l-1;
  for(int i=l; i<r; ++i){
    if(v.at(i)<v.at(pivot))
      swap(v.at(++smallerThenPivot), v.at(i));
  }
  swap(v.at(++smallerThenPivot), v.at(pivot));
  
  middlePivotQuicksort(v, l, smallerThenPivot-1);
  middlePivotQuicksort(v, smallerThenPivot+1, r);
}

int main(){
  vector<int> v{3,2,5,1,4};

  middlePivotQuicksort(v, 0, v.size()-1);
  
  cout<<"정렬된 벡터: ";
  for(int i=0; i<v.size(); ++i)
    cout<<v.at(i);
}
