#!C:\xampp\perl\bin\perl.exe
use CGI qw(:standard);
use CGI::Carp qw(warningsToBrowser fatalsToBrowser);
@coins = ("Welcome to Web Programming Lab","Have a nice time in lab", "Practice all the programs", "Well done Good Day");
$range = scalar (@coins);
$random = int(rand($range));
print header();
print start_html(-title=>"Greetings",-bgcolor=>"#FFD800", -text=>"#800000"); 
print h1("Random Greetings");
if(param)
{
$cmd=param("name");
print b("Hello $cmd, $coins[$random]"),br(); 
print start_form(); 
print submit(-value=>"Back"); 
print end_form();
} else {
print h3("Enter your Name ");
print start_form(),textfield(-name=>"name",-value=>""), submit(-name=>"submit",- value=>"Submit"), reset();
print end_form();
}
print end_html();