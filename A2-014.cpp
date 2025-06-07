#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string n, m, result, new_n, new_m;
    cin >> n >> m;
    int n_len = n.length();
    int m_len = m.length();
    int a = 0, count = 0, w_len = 0, mx = 0;
    if (n_len > m_len) {
        a = n_len - m_len;
        new_m = m + m.substr(0, a);
        result.resize(n_len);

        for (int i = 0; i < n_len; i++) {
            n[i] = tolower(n[i]);
            new_m[i] = tolower(new_m[i]);
            if ((n[i] == 'l' || new_m[i] == 'l') ||
                (n[i] == 'o' || new_m[i] == 'o') ||
                (n[i] == 'v' || new_m[i] == 'v') ||
                (n[i] == 'e' || new_m[i] == 'e')) {
                result[i] = 'w';
                count += 1;
                w_len += 1;
            } else {
                result[i] = '$';
                if(w_len > mx) {
                    mx = w_len;
                    w_len = 0;
                }
            }
        }
        if(w_len > mx) {
            mx = w_len;
        }
    } else if (m_len > n_len) {
        a = m_len - n_len;
        new_n = n + n.substr(0, a);
        result.resize(m_len);

        for (int i = 0; i < m_len; i++) {
            new_n[i] = tolower(new_n[i]);
            m[i] = tolower(m[i]);
            if ((new_n[i] == 'l' || m[i] == 'l') ||
                (new_n[i] == 'o' || m[i] == 'o') ||
                (new_n[i] == 'v' || m[i] == 'v') ||
                (new_n[i] == 'e' || m[i] == 'e')) {
                result[i] = 'w';
                count += 1;
                w_len += 1;
            } else {
                result[i] = '$';
                if(w_len > mx) {
                    mx = w_len;
                    w_len = 0;
                }
            }
        }
        if(w_len > mx) {
            mx = w_len;
        }
    } else {
        result.resize(n_len);
        for (int i = 0; i < n_len; i++) {
            n[i] = tolower(n[i]);
            m[i] = tolower(m[i]);
            if ((n[i] == 'l' || m[i] == 'l') ||
                (n[i] == 'o' || m[i] == 'o') ||
                (n[i] == 'v' || m[i] == 'v') ||
                (n[i] == 'e' || m[i] == 'e')) {
                result[i] = 'w';
                count += 1;
                w_len += 1;
            } else {
                result[i] = '$';
                if(w_len > mx) {
                    mx = w_len;
                    w_len = 0;
                }
            }
        }
        if(w_len > mx) {
            mx = w_len;
        }
    }

    if(count % 2 == 0) {
        if(mx >= 2) {
            cout << result;
        } else if(mx <2) {
            cout << result << '#';
        }
    } else if(count % 2 != 0){
        cout << result << mx;
    }
}