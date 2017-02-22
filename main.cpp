#include<iostream>
#include<cstring>
#include<memory>
#include<cstdio>
using namespace std;


int main(){
	//string s = "abcdabefgh";
	char s[30001];
	int record[300];
	while(~scanf("%s",s)) {
        int str_length = strlen(s);
        memset(record,-1,sizeof(record));
        int pre = 0;
        int ans = 0;
        for(int i = 0; i < str_length; i++) {
            if(record[s[i]] != -1) {

                if(record[s[i]] >= pre) {
                    pre = record[s[i]] +1;
                }
            }
            record[s[i]] = i;
            ans = max(ans, i - pre + 1);
        }
        printf("%d\n",ans);

	}
	//
}
