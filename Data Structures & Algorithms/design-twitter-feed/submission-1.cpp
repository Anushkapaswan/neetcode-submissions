class Twitter {
public:
    int timestamp = 0;

    // follower → set of followees
    unordered_map<int, unordered_set<int>> followmap;

    // user → list of {time, tweetId}
    unordered_map<int, vector<pair<int,int>>> tweet;

    Twitter() {}

    // 🔹 Post Tweet
    void postTweet(int userId, int tweetId) {
        tweet[userId].push_back({timestamp++, tweetId});
    }

    // 🔹 Get News Feed
    vector<int> getNewsFeed(int userId) {
        vector<int> result;

        // max heap
        priority_queue<vector<int>> pq;

        // user should follow himself
        followmap[userId].insert(userId);

        // STEP 1: push latest tweet of each followee
        for (int person : followmap[userId]) {

            if (tweet.count(person)) {

                auto &twits = tweet[person];
                int lastIndex = twits.size() - 1;

                int t = twits[lastIndex].first;
                int tweetId = twits[lastIndex].second;

                // {time, tweetId, person, index}
                pq.push({t, tweetId, person, lastIndex});
            }
        }

        // STEP 2: get top 10 tweets
        while (!pq.empty() && result.size() < 10) {

            auto top = pq.top();
            pq.pop();

            int tweetId = top[1];
            int person = top[2];
            int index = top[3];

            result.push_back(tweetId);

            // STEP 3: push next older tweet
            if (index > 0) {
                auto &nextTweet = tweet[person][index - 1];
                pq.push({nextTweet.first, nextTweet.second, person, index - 1});
            }
        }

        return result;
    }

    // 🔹 Follow
    void follow(int followerId, int followeeId) {
        followmap[followerId].insert(followeeId);
    }

    // 🔹 Unfollow
    void unfollow(int followerId, int followeeId) {
        followmap[followerId].erase(followeeId);
    }
};