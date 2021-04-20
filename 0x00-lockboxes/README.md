<h1 class="gap">0x00. Lockboxes</h1>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be interpreted/compiled on Ubuntu 14.04 LTS using <code>python3</code> (version 3.4.3)</li>
<li>All your files should end with a new line</li>
<li>The first line of all your files should be exactly <code>#!/usr/bin/python3</code></li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should be documented</li>
<li>Your code should use the <code>PEP 8</code> style (version 1.7.x)</li>
<li>All your files must be executable</li>
</ul>

<h2 class="gap">Tasks</h2>

<p>You have <code>n</code> number of locked boxes in front of you. 
Each box is numbered sequentially from <code>0</code> to <code>n - 1</code> and each box may contain keys to the other boxes. </p>

<p>Write a method that determines if all the boxes can be opened.</p>

<ul>
<li>Prototype: <code>def canUnlockAll(boxes)</code></li>
<li><code>boxes</code> is a list of lists</li>
<li>A key with the same number as a box opens that box</li>
<li>You can assume all keys will be positive integers

<ul>
<li>There can be keys that do not have boxes</li>
</ul></li>
<li>The first box <code>boxes[0]</code> is unlocked</li>
<li>Return <code>True</code> if all boxes can be opened, else return <code>False</code></li>
</ul>
