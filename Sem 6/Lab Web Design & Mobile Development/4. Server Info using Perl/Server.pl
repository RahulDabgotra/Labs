#!C:\xampp\perl\bin\perl.exe
print "content-type:text/html\n\n";
print "<html>\n";
print "<head> <title> About this server </title> </head>\n";
print "<body><h1> About this server </h1>\n";
print "<p> This information is sent by web server to every CGI program.";
print "<hr>";
print "Server name : $ENV{'SERVER_NAME'}<br>";
print "Running on port : $ENV{'SERVER_PORT'}<br>";
print "Server Software : $ENV{'SERVER_SOFTWARE'}<br>";
print "CGI-Revision : $ENV{'GATEWAY_INTERFACE'}<br>";
print "Root Directory of Server : $ENV{'DOCUMENT_ROOT'}<br>";
print "Browser Type : $ENV{'HTTP_USER_AGENT'}<br>";
print "Full pathname of current CGI : $ENV{'SCRIPT_FILENAME'}<br>";
print "<hr>\n";
print "</body></html>\n";
exit(0);