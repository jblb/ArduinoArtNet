//
//
static void setIP(IPConfiguration iptype, const char *ip, const char *subnet);
static void artSend(size_t length, word sport, byte *dip, word dport);
static void callback(unsigned short port, const char *buffer, unsigned short length);
