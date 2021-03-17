#include<iostream>

using namespace std;

int strlen(char a[]) {
	int count = 0;
	while (*(a+count)) {
		count++;
	}
	return count;
}

void reverse(char a[]) {
	int n = strlen(a);
	for (int i = 0; i < (n/2); i++) {
		swap(a[i] , a[n - 1 - i]);
	}
}

void delete_char(char a[], char c) {
	int n = strlen(a);
	for (int i = 0; i < n ; i++) {
		if (a[i] == c) {
			for (int i = 0; i < n - 1; i++) {
				a[i] = a[i + 1];
			}
			n--;
		}
	}
}

void pad_right(char a[], int n) {
	int k = strlen(a);
	while (k <= n) {
		a[k] = ' ';
		k++;
	}
}

void pad_left(char a[], int n) {
	int k = strlen(a);
	while (k < n) {
		k++;
		for (int i = k - 1; i >= 0; i--) {
			*(a + i) = *(a + i - 1);
		}
		*a = ' ';
	}
}
 
void truncate(char a[], int n) {
	int k = strlen(a);
	for (int i = n; i < k; i++)a[i] =NULL;
}

bool is_palindrome(char a[]){
	int k = strlen(a);
	for (int i = 0; i < k / 2; i++) {
		if (a[i] != a[k - i - 1]) return false;
	}
	return true;
}

void trim_left(char a[]) {
	int k = strlen(a);
	int count = 0;
	for (int i = 0; i < k; i++) {
		if (a[i] == ' ') count++;
		else break;
	}
	for (int i = 0; i < k-count; i++)
	{
		*(a + i) = *(a + i + count);
	}
	for(int i=k-count;i<k;i++){
		*(a + i) = NULL;
	}
}

int main(int argc, char* argv[]) {
	char* a = new char[100];
	cin.getline(a,100);
	pad_left(a,10);
	cout << a;
	return 0;
}