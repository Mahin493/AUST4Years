
<!DOCTYPE html>

<html>

    <head>
       <!-- Latest compiled and minified CSS -->
       <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">

 
    </head>

 <body>

    <div class="container" id="container">
        <table class="table table-bordered mt-5 table-dark font-weight-bold text-center">
            <thead>
                <tr >
                    <th>ID</th>
                    <th>NAME</th>
                    <th>EMAIL</th>
                    <th>PHONE</th>
                    <th>SUBJECT</th>
                    <th>MESSAGE</th>
                    
                   
               
                </tr>
            </thead>
            <tbody>
                <?php
                    
                    if (($csvfile = fopen("data.csv", "r")) !== FALSE) {
                        while (($csvdata = fgetcsv($csvfile, 1000, ",")) !== FALSE) {
                            echo '<tr>';
                                    
                                    echo '<td>'.$csvdata[0].'</td>';
                                    echo '<td>'.$csvdata[1].'</td>';
                                    echo '<td>'.$csvdata[2].'</td>';
                                    echo '<td>'.$csvdata[3].'</td>';
                                    echo '<td>'.$csvdata[4].'</td>';
                                    echo '<td>'.$csvdata[5].'</td>';
                           
                            
                            echo '</tr>';
                        }
                        fclose($csvfile);
                    }
                ?>
            </tbody>
           </table>
    </div>


    <!-- jQuery library -->
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>

    <!-- Popper JS -->
   <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>

    <!-- Latest compiled JavaScript -->
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>


</body>
</html>