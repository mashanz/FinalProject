/* Generated by Yosys 0.7 (git sha1 61f6811, i686-w64-mingw32.static-gcc 4.9.3 -Os) */

module top(a, b, c);
  wire \$abc$309$n17 ;
  wire \$abc$309$n18 ;
  wire \$abc$309$n20 ;
  wire \$abc$309$n21 ;
  wire \$abc$309$n22 ;
  wire \$abc$309$n23_1 ;
  wire \$abc$309$n24 ;
  wire \$abc$309$n25 ;
  wire \$abc$309$n27 ;
  wire \$abc$309$n28 ;
  wire \$abc$309$n29 ;
  wire \$abc$309$n30 ;
  wire \$abc$309$n31 ;
  wire \$abc$309$n32 ;
  wire \$abc$309$n33 ;
  wire \$abc$309$n34 ;
  wire \$abc$309$n35 ;
  wire \$abc$309$n36 ;
  wire \$abc$309$n37 ;
  wire \$abc$309$n38 ;
  wire \$abc$309$n40 ;
  wire \$abc$309$n41 ;
  wire \$abc$309$n42 ;
  wire \$abc$309$n43 ;
  wire \$abc$309$n44_1 ;
  wire \$abc$309$n45_1 ;
  wire \$abc$309$n46 ;
  wire \$abc$309$n47 ;
  wire \$abc$309$n48 ;
  wire \$abc$309$n49 ;
  wire \$abc$309$n50 ;
  wire \$abc$309$n51_1 ;
  wire \$abc$309$n52 ;
  wire \$abc$309$n53_1 ;
  wire \$abc$309$n54 ;
  wire \$abc$309$n56 ;
  wire \$abc$309$n57 ;
  wire \$abc$309$n58 ;
  wire \$abc$309$n59 ;
  wire \$abc$309$n60 ;
  wire \$abc$309$n61 ;
  wire \$abc$309$n62 ;
  wire \$abc$309$n63 ;
  wire \$abc$309$n64 ;
  wire \$abc$309$n66_1 ;
  wire \$abc$309$n67_1 ;
  wire \$abc$309$n68_1 ;
  wire \$abc$309$n69_1 ;
  wire \$abc$309$n70_1 ;
  wire \$abc$309$n71_1 ;
  wire \$abc$309$n73_1 ;
  wire \$abc$309$n74_1 ;
  input [3:0] a;
  input [3:0] b;
  output [7:0] c;
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$310  (
    .A(a[1]),
    .B(b[0]),
    .Y(\$abc$309$n17 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$311  (
    .A(b[1]),
    .B(a[0]),
    .Y(\$abc$309$n18 )
  );
  XOR \$abc$309$auto$blifparse.cc:286:parse_blif$312  (
    .A(\$abc$309$n18 ),
    .B(\$abc$309$n17 ),
    .Y(c[1])
  );
  OR \$abc$309$auto$blifparse.cc:286:parse_blif$313  (
    .A(\$abc$309$n18 ),
    .B(\$abc$309$n17 ),
    .Y(\$abc$309$n20 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$314  (
    .A(b[2]),
    .B(a[0]),
    .Y(\$abc$309$n21 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$315  (
    .A(b[1]),
    .B(a[1]),
    .Y(\$abc$309$n22 )
  );
  AND \$abc$309$auto$blifparse.cc:286:parse_blif$316  (
    .A(a[2]),
    .B(b[0]),
    .Y(\$abc$309$n23_1 )
  );
  XNOR \$abc$309$auto$blifparse.cc:286:parse_blif$317  (
    .A(\$abc$309$n23_1 ),
    .B(\$abc$309$n22 ),
    .Y(\$abc$309$n24 )
  );
  XOR \$abc$309$auto$blifparse.cc:286:parse_blif$318  (
    .A(\$abc$309$n24 ),
    .B(\$abc$309$n21 ),
    .Y(\$abc$309$n25 )
  );
  XOR \$abc$309$auto$blifparse.cc:286:parse_blif$319  (
    .A(\$abc$309$n25 ),
    .B(\$abc$309$n20 ),
    .Y(c[2])
  );
  OR \$abc$309$auto$blifparse.cc:286:parse_blif$320  (
    .A(\$abc$309$n25 ),
    .B(\$abc$309$n20 ),
    .Y(\$abc$309$n27 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$321  (
    .A(b[3]),
    .B(a[0]),
    .Y(\$abc$309$n28 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$322  (
    .A(b[1]),
    .B(a[2]),
    .Y(\$abc$309$n29 )
  );
  NOR \$abc$309$auto$blifparse.cc:286:parse_blif$323  (
    .A(\$abc$309$n29 ),
    .B(\$abc$309$n17 ),
    .Y(\$abc$309$n30 )
  );
  AOI31 \$abc$309$auto$blifparse.cc:286:parse_blif$324  (
    .A(b[2]),
    .B(a[0]),
    .C(\$abc$309$n24 ),
    .D(\$abc$309$n30 ),
    .Y(\$abc$309$n31 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$325  (
    .A(b[2]),
    .B(a[1]),
    .Y(\$abc$309$n32 )
  );
  AND \$abc$309$auto$blifparse.cc:286:parse_blif$326  (
    .A(b[1]),
    .B(a[2]),
    .Y(\$abc$309$n33 )
  );
  AND \$abc$309$auto$blifparse.cc:286:parse_blif$327  (
    .A(a[3]),
    .B(b[0]),
    .Y(\$abc$309$n34 )
  );
  XNOR \$abc$309$auto$blifparse.cc:286:parse_blif$328  (
    .A(\$abc$309$n34 ),
    .B(\$abc$309$n33 ),
    .Y(\$abc$309$n35 )
  );
  XNOR \$abc$309$auto$blifparse.cc:286:parse_blif$329  (
    .A(\$abc$309$n35 ),
    .B(\$abc$309$n32 ),
    .Y(\$abc$309$n36 )
  );
  XNOR \$abc$309$auto$blifparse.cc:286:parse_blif$330  (
    .A(\$abc$309$n36 ),
    .B(\$abc$309$n31 ),
    .Y(\$abc$309$n37 )
  );
  XNOR \$abc$309$auto$blifparse.cc:286:parse_blif$331  (
    .A(\$abc$309$n37 ),
    .B(\$abc$309$n28 ),
    .Y(\$abc$309$n38 )
  );
  XOR \$abc$309$auto$blifparse.cc:286:parse_blif$332  (
    .A(\$abc$309$n38 ),
    .B(\$abc$309$n27 ),
    .Y(c[3])
  );
  OR \$abc$309$auto$blifparse.cc:286:parse_blif$333  (
    .A(\$abc$309$n38 ),
    .B(\$abc$309$n27 ),
    .Y(\$abc$309$n40 )
  );
  NOR \$abc$309$auto$blifparse.cc:286:parse_blif$334  (
    .A(\$abc$309$n36 ),
    .B(\$abc$309$n31 ),
    .Y(\$abc$309$n41 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$335  (
    .A(\$abc$309$n36 ),
    .B(\$abc$309$n31 ),
    .Y(\$abc$309$n42 )
  );
  AOI31 \$abc$309$auto$blifparse.cc:286:parse_blif$336  (
    .A(b[3]),
    .B(a[0]),
    .C(\$abc$309$n42 ),
    .D(\$abc$309$n41 ),
    .Y(\$abc$309$n43 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$337  (
    .A(b[3]),
    .B(a[1]),
    .Y(\$abc$309$n44_1 )
  );
  AND \$abc$309$auto$blifparse.cc:286:parse_blif$338  (
    .A(b[1]),
    .B(a[3]),
    .Y(\$abc$309$n45_1 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$339  (
    .A(\$abc$309$n45_1 ),
    .B(\$abc$309$n23_1 ),
    .Y(\$abc$309$n46 )
  );
  OAI21 \$abc$309$auto$blifparse.cc:286:parse_blif$340  (
    .A(\$abc$309$n35 ),
    .B(\$abc$309$n32 ),
    .C(\$abc$309$n46 ),
    .Y(\$abc$309$n47 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$341  (
    .A(b[2]),
    .B(a[3]),
    .Y(\$abc$309$n48 )
  );
  NOT \$abc$309$auto$blifparse.cc:286:parse_blif$342  (
    .A(\$abc$309$n48 ),
    .Y(\$abc$309$n49 )
  );
  AOI21 \$abc$309$auto$blifparse.cc:286:parse_blif$343  (
    .A(b[2]),
    .B(a[2]),
    .C(\$abc$309$n45_1 ),
    .Y(\$abc$309$n50 )
  );
  AOI21 \$abc$309$auto$blifparse.cc:286:parse_blif$344  (
    .A(\$abc$309$n49 ),
    .B(\$abc$309$n33 ),
    .C(\$abc$309$n50 ),
    .Y(\$abc$309$n51_1 )
  );
  XOR \$abc$309$auto$blifparse.cc:286:parse_blif$345  (
    .A(\$abc$309$n51_1 ),
    .B(\$abc$309$n47 ),
    .Y(\$abc$309$n52 )
  );
  XNOR \$abc$309$auto$blifparse.cc:286:parse_blif$346  (
    .A(\$abc$309$n52 ),
    .B(\$abc$309$n44_1 ),
    .Y(\$abc$309$n53_1 )
  );
  XOR \$abc$309$auto$blifparse.cc:286:parse_blif$347  (
    .A(\$abc$309$n53_1 ),
    .B(\$abc$309$n43 ),
    .Y(\$abc$309$n54 )
  );
  XOR \$abc$309$auto$blifparse.cc:286:parse_blif$348  (
    .A(\$abc$309$n54 ),
    .B(\$abc$309$n40 ),
    .Y(c[4])
  );
  NOR \$abc$309$auto$blifparse.cc:286:parse_blif$349  (
    .A(\$abc$309$n37 ),
    .B(\$abc$309$n28 ),
    .Y(\$abc$309$n56 )
  );
  OAI21 \$abc$309$auto$blifparse.cc:286:parse_blif$350  (
    .A(\$abc$309$n56 ),
    .B(\$abc$309$n41 ),
    .C(\$abc$309$n53_1 ),
    .Y(\$abc$309$n57 )
  );
  OAI21 \$abc$309$auto$blifparse.cc:286:parse_blif$351  (
    .A(\$abc$309$n54 ),
    .B(\$abc$309$n40 ),
    .C(\$abc$309$n57 ),
    .Y(\$abc$309$n58 )
  );
  AND \$abc$309$auto$blifparse.cc:286:parse_blif$352  (
    .A(\$abc$309$n51_1 ),
    .B(\$abc$309$n47 ),
    .Y(\$abc$309$n59 )
  );
  AOI31 \$abc$309$auto$blifparse.cc:286:parse_blif$353  (
    .A(b[3]),
    .B(a[1]),
    .C(\$abc$309$n52 ),
    .D(\$abc$309$n59 ),
    .Y(\$abc$309$n60 )
  );
  NOR \$abc$309$auto$blifparse.cc:286:parse_blif$354  (
    .A(\$abc$309$n48 ),
    .B(\$abc$309$n33 ),
    .Y(\$abc$309$n61 )
  );
  AND \$abc$309$auto$blifparse.cc:286:parse_blif$355  (
    .A(b[3]),
    .B(a[2]),
    .Y(\$abc$309$n62 )
  );
  XNOR \$abc$309$auto$blifparse.cc:286:parse_blif$356  (
    .A(\$abc$309$n62 ),
    .B(\$abc$309$n61 ),
    .Y(\$abc$309$n63 )
  );
  XNOR \$abc$309$auto$blifparse.cc:286:parse_blif$357  (
    .A(\$abc$309$n63 ),
    .B(\$abc$309$n60 ),
    .Y(\$abc$309$n64 )
  );
  XNOR \$abc$309$auto$blifparse.cc:286:parse_blif$358  (
    .A(\$abc$309$n64 ),
    .B(\$abc$309$n58 ),
    .Y(c[5])
  );
  AND \$abc$309$auto$blifparse.cc:286:parse_blif$359  (
    .A(b[3]),
    .B(a[3]),
    .Y(\$abc$309$n66_1 )
  );
  OAI21 \$abc$309$auto$blifparse.cc:286:parse_blif$360  (
    .A(\$abc$309$n62 ),
    .B(\$abc$309$n33 ),
    .C(\$abc$309$n49 ),
    .Y(\$abc$309$n67_1 )
  );
  XOR \$abc$309$auto$blifparse.cc:286:parse_blif$361  (
    .A(\$abc$309$n67_1 ),
    .B(\$abc$309$n66_1 ),
    .Y(\$abc$309$n68_1 )
  );
  NOR \$abc$309$auto$blifparse.cc:286:parse_blif$362  (
    .A(\$abc$309$n63 ),
    .B(\$abc$309$n60 ),
    .Y(\$abc$309$n69_1 )
  );
  NAND \$abc$309$auto$blifparse.cc:286:parse_blif$363  (
    .A(\$abc$309$n63 ),
    .B(\$abc$309$n60 ),
    .Y(\$abc$309$n70_1 )
  );
  AOI21 \$abc$309$auto$blifparse.cc:286:parse_blif$364  (
    .A(\$abc$309$n70_1 ),
    .B(\$abc$309$n58 ),
    .C(\$abc$309$n69_1 ),
    .Y(\$abc$309$n71_1 )
  );
  XOR \$abc$309$auto$blifparse.cc:286:parse_blif$365  (
    .A(\$abc$309$n71_1 ),
    .B(\$abc$309$n68_1 ),
    .Y(c[6])
  );
  NOT \$abc$309$auto$blifparse.cc:286:parse_blif$366  (
    .A(\$abc$309$n66_1 ),
    .Y(\$abc$309$n73_1 )
  );
  OR \$abc$309$auto$blifparse.cc:286:parse_blif$367  (
    .A(\$abc$309$n67_1 ),
    .B(\$abc$309$n73_1 ),
    .Y(\$abc$309$n74_1 )
  );
  OAI21 \$abc$309$auto$blifparse.cc:286:parse_blif$368  (
    .A(\$abc$309$n71_1 ),
    .B(\$abc$309$n68_1 ),
    .C(\$abc$309$n74_1 ),
    .Y(c[7])
  );
  AND \$abc$309$auto$blifparse.cc:286:parse_blif$369  (
    .A(b[0]),
    .B(a[0]),
    .Y(c[0])
  );
endmodule
