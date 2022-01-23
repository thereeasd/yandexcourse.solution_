int main() {
	int n;
	cin >> n;
	vector <int> a;
	//считывание
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	//обработка
	for (int j = 0; j < n; j++) {
		int num_min = j;
		for (int i = j; i < n; i++) {
			if (a[i] < a[num_min]) {
				num_min = i;
			}
		}
		int temp;
		temp = a[j];
		a[j] = a[num_min];
		a[num_min] = temp;
	}
	//вывод
		for (auto now : a) {
			cout << now << " ";
		}
		return 0;
}