<?php
/**
 * @file
 * wcspc_map.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function wcspc_map_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Alcohol',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '64dac9fc-a3ba-4885-bfc8-68c84329951b',
    'vocabulary_machine_name' => 'substance',
    'field_image' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'uid' => 1,
          'filename' => 'noun_98093_cc.png',
          'uri' => 'public://noun_98093_cc.png',
          'filemime' => 'image/png',
          'filesize' => 740,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '547ba0bc-7d4f-4d83-94ca-db4558ded2e8',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 60,
            'width' => 60,
          ),
          'alt' => '',
          'title' => '',
          'height' => 60,
          'width' => 60,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAAACXBIWXMAAA7EAAAOxAGVKw4bAAAClklEQVRoge3asWsUQRTH8Y9BQpAgIYQQJIioSAoTxEIsLCxSWIiICP4XYmElKFhYWYqIlViJtWAlFhYWFiIKQdFEDWISlRCihkONWrw5E2MC591uPJf5wrB7s3Nv3m/f3JuBe2SqzYZ1mqcfOzGAXnSl/gXM4S0m8G6d/CmcbTiFW5jBjwbbTPrOyWSjcIqO8AGcxSg6MI9HGMNrTKe+WnrehR4R+R3YjRF04jvu4DzuF+xny2zEZSziPS5if+r/WzbhEK7hc7J5qUlbpXFVOHZBOFwUA7gplvuVAu22xC4h9nRJ9juE6EWR+P45x0QEBkuc43Ca42irhjpa9+WXjeMF2FqLE+naFr/j4+Ltf8U5S3tsEfThuqVtq8yX2jB1wfU2JZLXXs2toE4cFEnq4wrbLQsuY4kM4Exqs3go9uGX4iQ1hy9pbJc4eS3fh/coNtP/Rtm/iV5xCBkteZ6GKSJp/VdkwVUnC646WXDVyYKrThZcdbLgqpMFV50suOpkwVUnC646WXDVyYKrThZcdbLgqlOE4NkCbDTKh3Wca0068VzjxWfNtmdprrZgRPzzX5bYKfFneVuxxVJ5UVFCF3FDVAi0LUOiEm9c80LHk42hop0ru5p2myhBHMZ2f1bT1kTSm8YLPMEDvCrZr0ymyvRh64q+nmX3vakt/9yd7jdpkwLQtVgtaY2K4ux9opi7W5ToD4ukMpme1XAPR0TC2YK7QvCQOBXdTuPbhtUEbxZZtJau3fgkTjlf0n2/iOxYus6n6zuxGrpExd2Cpaq7tmA1wfV6xm9CxKRYqoMi0nNii3ksolkf05nu60In8LRE35tiNcEDIkL9wvF5EaUeEf2aEPcmjf+W+nemsfWozon9NZPJlMdPs1TWSa0yVl4AAAAASUVORK5CYII=',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tobacco',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8ccb5b37-983c-4763-81a3-9d477d701d2b',
    'vocabulary_machine_name' => 'substance',
    'field_image' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'uid' => 1,
          'filename' => 'noun_61569.png',
          'uri' => 'public://noun_61569.png',
          'filemime' => 'image/png',
          'filesize' => 245,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '6c1c913f-183d-40f3-b51e-d6bdd947c062',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 60,
            'width' => 60,
          ),
          'alt' => '',
          'title' => '',
          'height' => 60,
          'width' => 60,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAAACXBIWXMAAA7EAAAOxAGVKw4bAAAAp0lEQVRoge3PwQkCQRBE0Qpgg5xINreNTC82iFiisOtQPf9D3frQTyIiIqIT2iSN2U/8q03SIekmaZ/8y+U9Y2tt0e+wbdGfsO3Q32BrY86L5/UL9njcxwbWDGxSYM3AJgXWDGxSYM3AJgXWDGxSYM3AJgXWDGxSYM3AJgXWDGxSYM3AJgXWDGxaQwthq10LYSuHbomtXtGtsVWhl8BWQwthiYiILuwOqzKmqhGoT5AAAAAASUVORK5CYII=',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drugs',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fd6e543b-1a3b-4eda-bb7b-5159b00de628',
    'vocabulary_machine_name' => 'substance',
    'field_image' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'uid' => 1,
          'filename' => 'noun_10051_cc.png',
          'uri' => 'public://noun_10051_cc.png',
          'filemime' => 'image/png',
          'filesize' => 1314,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '14afb2fb-c4b1-45ef-a00b-2636fc06cdd0',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 60,
            'width' => 60,
          ),
          'alt' => '',
          'title' => '',
          'height' => 60,
          'width' => 60,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAAACXBIWXMAAA7EAAAOxAGVKw4bAAAE1ElEQVRoge2bT2hcVRTGfx3CIEMYYggllKEEqVI1lhAhdFG6EixSJIiL4qIEV10UFy6kK8GFyxJchuKiiyKuigQt2YhtF7GWKFTa+i/GxEakmnYabRpMMuPinKnTee+dd+/7N4P0g8s88u79zve9e9999537sov8UAL2A4eBF/W4BgwBFa2zAfwJ3AK+AxaAS3rcyFFbphgDpoFloJmwLCvHWMHavfAKcJnkJqPKZeXuGYwBF8neaGe5SJd7vAy8D2yRv9lW2dKY5QL8PYIaMJ9CeNoyrxoKwRiwmrMhl7JKgiG+y7P+BDAHDHi0aSCPmS+B68BvwLqeqwJ7gOeBg8ijq+TBXQdeBr7yaOOM54A13HtgEXgHGPGIMaJtFj3irKm2TDEELDkKWALewK+nOlFSDp+YQyniBYLPOQTdAT7gv1VUFqgo545D/DnSXeSHOOkQ7C9gMotgEZjUGHE6TqYNVHMIdBeZcPLGQY0Vd+FTPa7OxgR4ABxKE8AThzSmpelsUvL9xK+iphJLT46pGE1biHZvnIkh/iid7lT42NDVBGZ8CavAfYPwHjCcgfCkGFYN1r1c9SE8bpA1gXczEp4G72FrPO5Ddt4gug8MZqU6BYawR+F5V6I+7On/XJaqU+Ic9uOyz4XkgEHSJN8Fhi9ew9Z6oLNB2FLMeuVqAF+kVZkhPsdO9gW8hBl+2iD4CXkl6xXUEU1RCHgJM7zHIPjBV1EBsDQFvIQZtmbg373l5I/bxrmAlzDDVoJs01tO/tgwzgW8hBm2JgGnab5gWJoCXsIM/20Q+OSyioJ1C653/iHMsHWfjviqKQB7jXOB+zvM8JJBMBrRplsoIZqiEPASJv6GQdBPb21wjSOaohDwEmb4a+yJ66inqDxhbbI1EC9OWCB6ffo9vTGsS8CPROtciGoUhs+MQM8ARxLLzA5HgH3GectDAKPYbyFX6G4vl4CrIbraizWZheJKDOFUet2J8WaEplaZT0J6LIb0LvYzMC+MEJ+fPpaEuA+4GUN8lWy3VuJQIX4o3yTFEngyhrwJzFLMjnwZ+NRBz6tpA806BJnDMy3qiSpuG3qzWQSr4bYvfJ0EM6MDRpU7Lv4aGX4GcRS3LcsHSM76iQxiVpQrbi+pqdoyXwGecgjcKqvA2yTLXw9qW5/vSE4l9BSLaQ8RrR7/BDiBvHSEzegVPXdC67r0aHuZztxlB057Cuocen8g33As6rHLrRJVTufs9SHeotgP0jrLlmooFIeBX1MKT1KWNXZXMIDsxaYZlj63www9klcbBy6Qn9kLGqPnMA58iL1Z7VruKVcvpZQiUUHW4TPIKsllyO9o3Rltm8tLie+3lklRQTIle5GN7NZKbAO4A6wge0TWLkJuGCL4nts+UQzy6AqqddyZPWyvVwrh6ArCevglJOM3gWTu+5EvYF8AvkV6YwLZZ7qEfGAyADyFGPtFj1e03FHOJ5EFfh14FvgGSaNey8NYFMIMV5Eht6m//cj2Sxn4R493I710A8lArAPbyIXqa/vdRIZzQ9tua4wycnFuU/B/r4QZfl1/txFTK4joGtLTdaQHryFZw1adsh7XkXvxZ+Q76Z5CmOFhpGd3I8LXkd4ZQHp/EzF3S+tv69/3ad0NrV+nN/eTH+Mx/k/4F4bRe1I4xcNLAAAAAElFTkSuQmCC',
        ),
      ),
    ),
  );
  return $terms;
}
