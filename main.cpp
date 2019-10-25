#include "sleepy_discord/websocketpp_websocket.h"

class myClientClass : public SleepyDiscord::DiscordClient {
	public:
	using SleepyDiscord::DiscordClient::DiscordClient;  //this should call the DiscordClient constructor
};

int main() {
	myClientClass client("token", 2);
	client.run();
}
