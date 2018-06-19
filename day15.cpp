#include<bits/stdc++.h>
using namespace std;

// ----------------------------- SPOJ AMR12G - The Glittering Caves of Aglarond----------------

/*'Strange are the ways of Men, Legolas! Here they have one of the marvels of the Northern World, and what do they say of it? Caves, they say! Caves! Holes to fly to in time of war, to store fodder in! My good Legolas, do you know that the caverns of Helm's Deep are vast and beautiful? There would be an endless pilgrimage of Dwarves, merely to gaze at them, if such things were known to be. Aye indeed, they would pay pure gold for a brief glance!

'And, Legolas, when the torches are kindled and men walk on the sandy floors under the echoing domes, ah! then, Legolas, gems and crystals and veins of precious ore glint in the polished walls; and the light glows through folded marbles, shell-like, translucent as the living hands of Queen Galadriel.' - Gimli, describing to Legolas the Glittering Caves of Aglarond.

 

While these caves are by and large natural, there is one place where the Men of Rohan have chiseled into the rock to create a magnificent exhibit. You have a wall of the cave consisting of 'lighted diamonds' arranged in a N by M grid (basically, you have a light behind each diamond which can be turned on or off). Further, you have a switch corresponding to each row of this diamond-grid. When you operate a switch, it will toggle (flip) the lights corresponding to that row.

 

You are given the current configuration of the lighted diamonds. Gimli challenges Legolas to turn on as many diamonds as possible using EXACTLY K on/off operations of the switches. Since Legolas is an Elf of the Wood and doesn't care much for things that glitter, he instead asks for your help. Note that the same switch (i.e. row) can be chosen multiple times.

 

Input (STDIN):

The first line contains the number of test cases T. Each test case contains N, M and K on the first line followed by N lines containing M characters each. The ith line denotes the state of the diamonds in the ith row, where '*' denotes a diamond which is on and '.' denotes a diamond which is off.

 

Output (STDOUT):

Output T lines containing the answer for the corresponding case.

Between successive test cases, there should not be any blank lines in the output. */

int main(){
    int t,N,M,K;
    cin>>t;
    char arr[55][55];
    while(t--){
        cin>>N>>M>>K;
        vector<int>buldCount(N,0);
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='*')
                    buldCount[i]++;
            }
        }
        sort(buldCount.begin(),buldCount.end(),less<int>());
        int ind=0;
        // K switches
        while(K>0 && ind < N && M - buldCount[ind] > buldCount[ind]){
            buldCount[ind] = M-buldCount[ind];
            ind++;
            K--;
        }

        if(K!=0 && K%2==1){
            //Find row with minimum no of lit bulbs
            vector<int>::iterator it = min_element(buldCount.begin(),buldCount.end());
            *it = M-*it;
        }
        cout<<accumulate(buldCount.begin(),buldCount.end(),0)<<"\n";
    }
    return 0;
}