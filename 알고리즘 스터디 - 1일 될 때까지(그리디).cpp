#include <iostream>

using namespace std;

int checkN(int N, int K) {		// N �� K�� ������� Ȯ��
	if (N % K == 0) return 1;
	else return 0;
}

int main() {
	int N, K;
	int countN = 0;

	cin >> N >> K;
	
	while (N != 1) {	// N�� 1�� �� ������ �ݺ�
		if (checkN(N, K)) N = N / K;		// N�� K�� ����� N�� N/K�� �ȴ�.
		else {
			N = N - 1;	// N�� K�� ����� �ƴ϶�� N�� N-1�� �ȴ�.
		}
		countN += 1;		// �ݺ��� ���� ���� ��� Ƚ���� ����.
	}
	cout << countN << endl;
}