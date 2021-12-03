# Quiz 6

1. By default, the SSH service listens on port:

   - 22

2. To send packets, we need IP addresses. Typically, say over in the browser, we enter hostnames. What service translates hostnames to IP addresses so that we can send packets to their final destination?

   - DNS

3. To connect to your AWS instance from your system, do you specify your private key or public key? Phrased differently, which key needs to be on your system in order to connect to the remote system?
   - private key
4. T/F A subnet mask of 255.255.255.0 would translate to a CIDR notation of /8

   - False
   - CIDR notation would be /24
   - 255.255.255.0 = 11111111.11111111.11111111.00000000 for a total of 24 1's set

5. What does this rule do?
   `iptables -A INPUT -s 192.168.34.37 -p tcp --destination-port 25 -j ACCEPT`
   - Allows the given IP to connect to the system's port 25 using tcp
