#!/bin/sh
git log --pretty=oneline -n 5 | cut -c-40
