//#include <string>
//#include <vector>
//#include <iostream>
//
//
//#include <map>
//using namespace std;
//
////
//
//
//vector<int> solution(vector<int> array) {
//    vector<int> answer;
//
//    ///
//    map<int, vector<int>>m;
//    for (int i = 0; i < array.size(); i++)
//    {
//        if (m.find(array[i]) == m.end())m.insert({ array[i],{i} });
//        else { m[array[i]].push_back(i); }
//    }
//    for (int i = 0; i < array.size(); i++)
//    {
//        if(m.find)
//
//    }
//
//    
//
//    
//    
//
//
//
//    return answer;
//}
//
//int main() {
//    vector<int> vect = { 3, 5, 4, 1, 2 };
//    solution(vect);
//    return 0;
//}
//
//
////���� ����
////�迭�� �ϳ� �Էµ˴ϴ�.�迭�� �� ���ҿ� ���� �ش� ������ ������ ū ���ҵ� �߿��� �ش� ���ҿ� ���� ����� ��ġ�� �ִ� ������ �ε����� ã���ּ���.
////
////����:
////
////Ư�� ���ҿ� ����, �ش� ���Һ��� ū ���Ұ� ���ٸ� - 1�� �������� �մϴ�.
////���� ����� ���Ұ� �ϳ� �̻��̶��, �ε����� ���� ���� ���� �������� �մϴ�.
////�� ���Ҵ� 0�� 100, 000 ������ ���Դϴ�.
////�Է� �迭�� ���̴� 0���� 100, 000 �����Դϴ�.
////�ε����� 0���� �����մϴ�.
////�� �������� �˰������� ȿ������ �����ϱ� ���� �׽�Ʈ ���̽��� ���ԵǾ� ������, ��� �׽�Ʈ ���̽��� ����Ϸ��� �ð����⵵ O(n) �Ǵ� �װͺ��� ȿ������ �˰������� �ʿ��մϴ�.
////�Ʒ� �迭�� ���÷� Ȯ���� ���ô�.
////
////[3, 5, 4, 1, 2]
////���� ���� ���Һ��� ���캸�ڽ��ϴ�.
////3���� ū ���� �� ���� ����� ���Ҵ� 5�̰�, ������ 1.
////5���� ū ���Ҵ� �����Ƿ� ������ - 1.
////4���� ū ���� �� ���� ����� ���Ҵ� 5�̹Ƿ�, ������ 1.
////1���� ū ���� �� ���� ����� ���Ҵ� 4, 2�̰� �ε����� ���� 2, 4�Դϴ�.���� �ε����� �����ؾ� �ϹǷ� ������ 2.
////2���� ū ���� �� ���� ����� ���Ҵ� 4�̰�, ������ 2.
////
////���� ���� �迭��[1, -1, 1, 2, 2]�Դϴ�.