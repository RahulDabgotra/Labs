#!C:\xampp\perl\bin\perl.exe
use CGI qw(:standard);
use CGI::Carp qw(warningsToBrowser fatalsToBrowser);
print header();
print start_html(-title=>"Visitor Counter",-bgcolor=>"#FFD800", -text=>"#800000"); 
print h1("Welcome to Web Programming lab"); 
print h3("10CSL78");
print p("Experiment 6b: To displaythecountofvisitorsonahtmlpage");
open(FILE,'<count.txt'); $count=<FILE>;
close(FILE);
print hr(); $count++; open(FILE,'>count.txt'); 
print FILE "$count";
print i("This page has been viewed",b($count)," times"); close(FILE); 
print end_html();