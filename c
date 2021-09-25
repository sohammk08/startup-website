[1mdiff --git a/assets/img/cpti.jpg b/assets/img/cpti.jpg[m
[1mdeleted file mode 100644[m
[1mindex fc490b3..0000000[m
Binary files a/assets/img/cpti.jpg and /dev/null differ
[1mdiff --git a/assets/img/cpti2.jpg b/assets/img/cpti2.jpg[m
[1mdeleted file mode 100644[m
[1mindex 9c381ad..0000000[m
Binary files a/assets/img/cpti2.jpg and /dev/null differ
[1mdiff --git a/assets/img/cpti3.jpg b/assets/img/cpti3.jpg[m
[1mdeleted file mode 100644[m
[1mindex 234bd82..0000000[m
Binary files a/assets/img/cpti3.jpg and /dev/null differ
[1mdiff --git a/assets/style.css b/assets/style.css[m
[1mindex 1db2629..d38a05a 100644[m
[1m--- a/assets/style.css[m
[1m+++ b/assets/style.css[m
[36m@@ -64,19 +64,20 @@[m
 	text-transform: capitalize;[m
 	text-align: center;[m
 }[m
[31m-.stp-cpt {[m
[32m+[m[32m.cpt {[m
 	display: flex;[m
[31m-	margin-top: 2.5rem;[m
[31m-	margin: 2.5rem 4.5rem 3rem 4.5rem;[m
 }[m
[31m-.stp-cpt img {[m
[31m-	max-width: 35rem;[m
[32m+[m[32m.stp-cpt {[m
[32m+[m	[32mbackground: #24252a;[m
 	border-radius: 0.5rem;[m
 }[m
[32m+[m[32m.stp-cpt img {[m
[32m+[m	[32mdisplay: block;[m
[32m+[m	[32mmargin-left: auto;[m
[32m+[m	[32mmargin-right: auto;[m
[32m+[m[32m}[m
 .cpt_desc {[m
 	text-align: center;[m
[31m-	margin-top: auto;[m
[31m-	margin-bottom: auto;[m
 }[m
 .cpt_desc h2 {[m
 	color: #24252a;[m
[36m@@ -94,7 +95,13 @@[m
 	margin-top: -1.5rem;[m
 	margin: -1.5rem 2rem 4rem 2rem;[m
 }[m
[31m-.cpt_desc a {[m
[32m+[m[32m.mbt {[m
[32m+[m	[32mdisplay: block;[m
[32m+[m	[32mmargin-bottom: 5rem;[m
[32m+[m	[32mjustify-content: center;[m
[32m+[m
[32m+[m[32m}[m
[32m+[m[32m.mbt a {[m
 	text-decoration: none;[m
 	color: #333;[m
 	font-family: 'Montserrat';[m
[36m@@ -105,7 +112,7 @@[m
 	transition: 0.5s ease 0s;[m
 	padding: 0.6rem 0.6rem 0.6rem 0.6rem;[m
 }[m
[31m-.cpt_desc a:hover {[m
[32m+[m[32m.mbt a:hover {[m
 	color: #fff;[m
 	background: #49f496;[m
 }[m
[1mdiff --git a/index.html b/index.html[m
[1mindex e59f49a..b31c61b 100644[m
[1m--- a/index.html[m
[1m+++ b/index.html[m
[36m@@ -43,32 +43,38 @@[m
 [m
   <!-- Concept -->[m
   <!-- Concept part_1 -->[m
[31m-  <div class="stp-cpt">[m
[31m-    <img src="assets/img/cpti.jpg">[m
[31m-    <div class="cpt_desc">[m
[31m-      <h2>our product</h2>[m
[31m-      <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod[m
[31m-      tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,[m
[31m-      quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo[m
[31m-      consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse[m
[31m-      cillum dolore eu fugiat nulla pariatur.</p>[m
[32m+[m[32m  <div class="cpt">[m
[32m+[m[32m    <div class="stp-cpt">[m
[32m+[m[32m      <img src="assets/img/cpti.svg">[m
[32m+[m[32m      <div class="cpt_desc">[m
[32m+[m[32m        <h2>our product</h2>[m
[32m+[m[32m        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod[m
[32m+[m[32m        tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,[m
[32m+[m[32m        quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo[m
[32m+[m[32m        consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse[m
[32m+[m[32m        cillum dolore eu fugiat nulla pariatur.</p>[m
[32m+[m[32m      </div>[m
     </div>[m
[31m-  </div>[m
 [m
[31m-  <!-- Concept part_2 -->[m
[31m-  <div class="stp-cpt">[m
[31m-    <img src="assets/img/cpti3.jpg">[m
[31m-    <div class="cpt_desc">[m
[31m-      <h2>our idea</h2>[m
[31m-      <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod[m
[31m-      tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,[m
[31m-      quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo[m
[31m-      consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse[m
[31m-      cillum dolore eu fugiat nulla pariatur.</p>[m
[31m-      <a href="contribute.html">more</a>[m
[32m+[m[32m    <!-- Concept part_2 -->[m
[32m+[m[32m    <div class="stp-cpt">[m
[32m+[m[32m      <img src="assets/img/cpti3.jpg">[m
[32m+[m[32m      <div class="cpt_desc">[m
[32m+[m[32m        <h2>our idea</h2>[m
[32m+[m[32m        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod[m
[32m+[m[32m        tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,[m
[32m+[m[32m        quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo[m
[32m+[m[32m        consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse[m
[32m+[m[32m        cillum dolore eu fugiat nulla pariatur.</p>[m
[32m+[m[32m      </div>[m
     </div>[m
   </div>[m
 [m
[32m+[m[32m  <!-- More button -->[m
[32m+[m[32m  <div class="mbt">[m
[32m+[m[32m    <a href="contribute.html">more</a>[m
[32m+[m[32m  </div>[m
[32m+[m
   <!-- Title Bar -->[m
   <div class="ttl_bar">[m
     <h2>about</h2>[m
