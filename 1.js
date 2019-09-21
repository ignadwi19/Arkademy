var name;
var age;
var address;
var hobbies;
var is_married;
var list_school;
var skills;
var interest_in_coding;

function return_biodata() {

    var obj = {
        "name": "Igna Dwi Utami",
        "age": 22,
        "address": "Yogyakarta",
        "hobbies": ["Photography", "editting"],
        "is_married": false,
        "list_school": [{
                "name": "SD 2 Sokaraja",
                "year_in": "2003",
                "year_out": "2009",
                "major": null
            },
            {
                "name": "SMP 1 Sokaraja",
                "year_in": "2009",
                "year_out": "2012",
                "major": null
            },
            {
                "name": "SMA 1 Purwokerto",
                "year_in": "2012",
                "year_out": "2015",
                "major": "Science"
            },
            {
                "name": "UGM",
                "year_in": "2015",
                "year_out": "2019",
                "major": "Information Technology"
            }
        ],
        "skills": [{
                "skill_name": "photography",
                "level": "advance"
            },
            {
                "skill_name": "editing",
                "level": "advance"
            }
        ],
        "interest_in_coding": true
    };

    var parse_obj = JSON.parse(obj);
    return parse_obj;

}