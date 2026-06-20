#include <stdio.h>

/* Recommended max cache and object sizes */
#define MAX_CACHE_SIZE 1049000
#define MAX_OBJECT_SIZE 102400

/* You won't lose style points for including this long line in your code */
static const char *user_agent_hdr = "User-Agent: Mozilla/5.0 (X11; Linux x86_64; rv:10.0.3) Gecko/20120305 Firefox/10.0.3\r\n";

int main()
{
    // TODO: Implement the proxy server
    // The proxy should:
    // 1. Listen for incoming connections
    // 2. Parse HTTP requests
    // 3. Forward requests to the server
    // 4. Cache responses (optional but recommended)
    // 5. Handle concurrent connections using threads
    // 6. Support proper HTTP headers including user_agent_hdr
    printf("%s", user_agent_hdr);
    return 0;
}
