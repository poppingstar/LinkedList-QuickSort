# LinkedList-QuickSort

## QuickSort
퀵소트는 평균 시간복잡도가 O(nlogn)인 고급 정렬로, 고급 정렬중에서도 일반적으로 가장 빠른 알고리즘입니다.<br>
하지만 최악의 경우 시간복잡도가O(n^2)이며, 이는 일반적인 정렬 알고리즘과 같은 시간 복잡도로써, 최악의 경우엔 실질적으로 일반 정렬보다 더욱 비효율적이게 됩니다.<br>
따라서 저희는 이를 피하기 위하여 벡터 내의 세 요소를 골라 그 중앙값으로 피벗을 선택했습니다.<br>

## LinkedList
연결 리스트는 각 노드의 데이터가 포인터로 연결된 리스트입니다.<br>
연속된 공간을 할당할 필요가 없어 메모리 할당이 상대적으로 쉬우며 포인터로 연결되었기 때문에 삽입/삭제가 빠르고 용이한 대신 포인터의크기만큼을 추가로 차지하며 임의 접근이 불가능하고 순차 탐색 속도또한 배열보다 느립니다.<br>
이것을 직접 구현해보았고, 구현에 shared pointer를 활용하여 메모리 누수를 방지할 수 있도록 하였습니다.<br>

## 소감
팀장 신민수: 라이브러리로만 사용하던 정렬과 연결 리스트를 직접 구현해보며 그 원리와 구조에 대해 깊이 이해할 수 있었습니다. 팀원과 상의하며 진행하여 더 즐거웠고, 이번 과제의 경험이 제게 도움이 될것이라 확신합니다. 다른 소팅 알고리즘이나 자료구조도 직접 구현해봐야겠다는 생각이 들었습니다.<br><br>
팀원 김진수: 퀵소트(Quick Sort) 알고리즘을 구현하면서, 그 효율성에 대해 깊이 감탄하게 되었습니다. 퀵소트매우 효율적으로 배열을 정렬하는 알고리즘으로, 특히 평균 시간 복잡도가 O(n log n)이라는 점에서 매우 인상적입니다. 이를 직접 구현해보는 과정에서 몇 가지 중요한 교훈과 이해를 얻을 수 있었습니다.
이번 구현에서는 벡터 a를 인수로 받아, 재귀적으로 정렬하는 방식으로 퀵소트를 작성했습니다. l과 r은 각각 배열의 왼쪽과 오른쪽 끝 인덱스를 나타내며, 이를 통해 배열의 특정 부분만을 선택적으로 정렬할 수 있었습니다.
가장 눈에 띄는 점은 피벗(pivot) 선택과 요소 교환(swap) 과정입니다. 이 구현에서는 배열의 오른쪽 끝 요소를 피벗으로 선택했습니다. 피벗을 기준으로 작은 요소와 큰 요소를 분류하는 과정이 매우 직관적이었으며, 이는 퀵소트의 핵심 아이디어를 명확히 보여줍니다. 특히, i와 j를 사용하여 피벗보다 작은 요소들을 앞으로 이동시키고, 마지막에 피벗을 올바른 위치로 이동시키는 과정은 매우 논리적이고 효율적이었습니다.
퀵소트 알고리즘을 직접 구현해 보면서, 알고리즘의 기본 원리와 효율성에 대해 깊이 이해할 수 있었습니다. 이러한 구현 경험은 단순히 코드 작성을 넘어, 알고리즘의 동작 방식을 심도 있게 이해하는 데 큰 도움이 되었습니다. 앞으로도 다양한 알고리즘을 직접 구현하고, 그 성능과 특성을 분석하며 더 나은 코딩 기술을 익히는 데 지속적으로 노력할 것입니다.<br><br>
팀원 김재호:두 알고리즘을 구현해 보면서 각각의 알고리즘 방식을 이해하고 알고리즘에 대한 지식을 배울 수 있었으며.
이를 통해 알고리즘의 강력함을 느낄 수 있었던 좋은 시간이 되었던 것 같습니다.
