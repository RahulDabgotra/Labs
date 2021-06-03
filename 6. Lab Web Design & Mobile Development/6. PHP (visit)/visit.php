<html>

<head>
    <title>Last Visit using Cookies</title>

    <style>
        h1 {
            text-align: center;
            font-family: verdana;
            font-size: 300%;
        }

        p {
            text-align: center;
            font-family: verdana;
            font-size: 150%;
        }
    </style>
</head>

<body bgcolor="#15202B" text="#FFFFFF">
    <h1>Web Programming Lab</h1>
    <p>Welcome to Web Programming Lab</p>

    <hr />
    <p style="color: red; font-style: bold">
        
    <?php 
    date_default_timezone_set('Asia/Calcutta');
    //Calculate 60 days in the future
    //seconds * minutes * hours * days + current time
    // set expiry date to two months from now $inTwoMonths = 60 * 60 * 24 * 60 + time(); setcookie('lastVisit', date("G:i - m/d/y"), $inTwoMonths);

    if(isset($_COOKIE['lastVisit']))
    {
        $visit = $_COOKIE['lastVisit']; 
        echo "Last Visited on : ".$visit;
    } 
    else
    echo "You've got some old cookies!";
    ?>
    </p>
</body>

</html>