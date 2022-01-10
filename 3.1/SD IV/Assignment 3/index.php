<?php

$name = '';
$email = '';
$subject = '';
$message = '';
$phone='';



function clean_text($string)
{
 $string = trim($string);
 $string = stripslashes($string);
 $string = htmlspecialchars($string);
 return $string;
}


if(isset($_POST["submit"]))
{
  
  $name = clean_text($_POST["name"]);
  $email = clean_text($_POST["email"]);
  $phone = clean_text($_POST["phone"]);
  $subject = clean_text($_POST["subject"]);
  $message = clean_text($_POST["message"]);
  


  $file_open = fopen("data.csv", "a");
  
  $no_rows = count(file("data.csv"));

  if($no_rows > 1)
  {
   $no_rows = ($no_rows - 1) + 1;
  }

  $form_data = array(
   'sr_no'  => $no_rows,
   'name'  => $name,
   'email'  => $email,
   'phone'  => $phone,
   'subject' => $subject,
  
   'message' => $message
  );

  fputcsv($file_open, $form_data);
 
  $name = '';
  $email = '';
  $phone='';
  $subject = '';
  $message = '';
  
 
}

?>
<!DOCTYPE html>
<html>
   <head>
           <!-- Latest compiled and minified CSS -->
          <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">  
    </head>
   <body>
     
     <div class="container mt-5">
        <div class="col-md-6" style="margin:0 auto; float:none;">
          <form method="post">
               <h3 class= "text-center font-weight-bold ">Contact Form</h3>
     
           <?php ?>

           <div class="form-group font-weight-bold">
                     <label for="name"> Name</label>
                      <input type="text" name="name" id="name" required placeholder="Enter Name" class="form-control"  value="<?php echo $name; ?>" />
             </div>

             <div class="form-group font-weight-bold">
               <label for="email"> Email</label>
               <input type="mail" name="email" id="email" class="form-control"   placeholder="Enter Email" required value="<?php echo $email; ?>" />
              </div> 

            <div class="form-group font-weight-bold">
               <label for="phone">Phone</label>
               <input type="tel" id="phone" name="phone" class="form-control"  placeholder="Enter Phone" required value="<?php echo $phone; ?>" />
            </div>
            <div class="form-group font-weight-bold">
               <label> Subject</label>
               <input type="text" name="subject" class="form-control"  placeholder="Enter Subject" value="<?php echo $subject; ?>" />
            </div>

            <div class="form-group font-weight-bold">
             <label>Enter Message</label>
             <textarea name="message" placeholder="Enter Message" class="form-control" value="<?php echo $message; ?>"> </textarea>
            </div>

            
            <div class="form-group text-center font-weight-bold button" >
              <input type="submit" name="submit"  value="Submit" />
           </div>
     
          </form>
     </div>
   </div>
      
     
     
     
  

      <div class="text-center ">
        <a href = "table.php"> <button> Go  To Table Data</button></a>
      </div>

    <!-- jQuery library -->
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>

    <!-- Popper JS -->
      <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>

       <!-- Latest compiled JavaScript -->
       <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
  </body>
</html>