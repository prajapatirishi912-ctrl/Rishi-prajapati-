// Function to format Instagram follower counts
function formatFollowersCount(count) {

    // If count is 1,000 or more, convert it to K
    if (count >= 1000 && count < 1000000) {
        return (count / 1000) + "K";
    }

    // If count is 1,000,000 or more, convert it to M
    if (count >= 1000000) {
        return (count / 1000000) + "M";
    }

    // If count is below 1,000, return it as it is
    return count;
}

